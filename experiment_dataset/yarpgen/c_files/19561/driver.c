#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2131160645;
unsigned long long int var_2 = 11573255933679804264ULL;
long long int var_3 = -7406533161051073846LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3072895140U;
long long int var_9 = 5989558529866842953LL;
unsigned short var_10 = (unsigned short)16003;
unsigned short var_12 = (unsigned short)35684;
unsigned long long int var_13 = 17199700478770479127ULL;
int zero = 0;
long long int var_14 = -411084208268764966LL;
unsigned char var_15 = (unsigned char)8;
unsigned short var_16 = (unsigned short)32427;
unsigned char var_17 = (unsigned char)226;
unsigned int var_18 = 1273910005U;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] [23] ;
long long int arr_7 [23] ;
long long int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4170 : (unsigned short)44363;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)54243 : (unsigned short)7031;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1292563872113364387LL : -2218629623325645653LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1231852780580846360LL : -6456369009283903201LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
