#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1380745695U;
int var_1 = 636311929;
signed char var_3 = (signed char)-7;
unsigned long long int var_5 = 14910015277645729818ULL;
unsigned short var_8 = (unsigned short)29542;
unsigned long long int var_9 = 1681384580116179901ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)62178;
signed char var_11 = (signed char)83;
long long int var_12 = -7281482123558560202LL;
unsigned short var_13 = (unsigned short)5328;
long long int var_14 = -3853592204958250498LL;
int var_15 = -1039395388;
unsigned short arr_0 [20] ;
long long int arr_1 [20] ;
unsigned short arr_2 [20] ;
long long int arr_3 [20] ;
unsigned long long int arr_4 [20] ;
long long int arr_5 [20] [20] ;
int arr_6 [20] [20] [20] ;
unsigned int arr_7 [20] [20] ;
unsigned short arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18590 : (unsigned short)4125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -5739873752704874697LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6252 : (unsigned short)15489;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -9126255833366264492LL : -5372680210204473599LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6415524332227078051ULL : 14621622408452066493ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -7391942212408209103LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -323389234 : 1789881754;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1137103277U : 167187086U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31569 : (unsigned short)30242;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
