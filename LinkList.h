#ifndef LinkList_h
#define LinkList_h
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#define n 11
#define m 3
typedef int dataType;                                                                                               typedef struct node{
	dataType data;
	struct node *next;
	int no;
}LinkList,node; 

LinkList* CreateList();
int Size (LinkList *);
void Insert(LinkList *,int k,dataType x);
void Delete(LinkList *, int k);
int Empty(LinkList *);
dataType GetData(LinkList *,int k);
node* Find(LinkList *,dataType x);
void Print(LinkList *);
void ClearList(LinkList *); 
void CreatList();
void Delect();

#endif
