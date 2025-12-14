#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned short var_1 = (unsigned short)46368;
signed char var_2 = (signed char)18;
int var_3 = 2058401163;
long long int var_4 = 7164699892950122791LL;
long long int var_5 = -12062280709465429LL;
long long int var_6 = 4315450465209856406LL;
long long int var_10 = 6415555764302378695LL;
unsigned short var_12 = (unsigned short)63200;
unsigned short var_13 = (unsigned short)38922;
unsigned int var_14 = 2403001688U;
int zero = 0;
short var_15 = (short)30459;
long long int var_16 = 6819150527094190396LL;
long long int var_17 = -1120441712445702991LL;
int var_18 = -172971931;
long long int var_19 = -9160658048118594012LL;
unsigned short var_20 = (unsigned short)30746;
unsigned char var_21 = (unsigned char)90;
long long int var_22 = -3270098360069822163LL;
int var_23 = 1131798278;
int var_24 = -1503071187;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)14031;
int var_27 = 838132515;
unsigned char arr_0 [21] ;
int arr_1 [21] ;
unsigned int arr_2 [21] ;
signed char arr_3 [21] ;
int arr_6 [21] [21] [21] ;
_Bool arr_7 [21] [21] [21] [21] ;
unsigned short arr_9 [21] [21] [21] [21] [21] ;
int arr_14 [21] [21] [21] [21] [21] [21] ;
_Bool arr_19 [14] ;
short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -130640591;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 82890967U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1451986960;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)50345;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1005049893 : -1064722042;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)8068 : (short)-4864;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
