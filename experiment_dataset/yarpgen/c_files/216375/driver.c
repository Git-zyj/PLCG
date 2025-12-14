#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1190569400U;
unsigned short var_1 = (unsigned short)44741;
unsigned long long int var_2 = 13339542090288538969ULL;
unsigned char var_3 = (unsigned char)150;
long long int var_4 = 4602665758680388359LL;
signed char var_5 = (signed char)87;
unsigned short var_6 = (unsigned short)11684;
long long int var_7 = -8134237459157954525LL;
int var_8 = 433738145;
short var_9 = (short)6642;
long long int var_10 = 4335264129303812955LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
long long int var_16 = 101598440341167039LL;
unsigned char var_17 = (unsigned char)57;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int var_20 = 1731719895;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)3086;
unsigned long long int var_23 = 11262662406811423478ULL;
int var_24 = -1421139486;
unsigned long long int var_25 = 15297326736898297877ULL;
unsigned int arr_0 [23] ;
long long int arr_1 [23] [23] ;
long long int arr_6 [23] [23] ;
int arr_8 [23] ;
unsigned int arr_9 [23] [23] ;
unsigned char arr_12 [22] [22] ;
unsigned long long int arr_3 [23] ;
unsigned short arr_4 [23] ;
unsigned char arr_5 [23] ;
unsigned long long int arr_10 [23] ;
unsigned char arr_11 [23] ;
int arr_14 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 602331564U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -6968796988530463242LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -6029112799254879801LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -672461323;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 3508051202U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 17375894456424317495ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)29249;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 3902656214913397965ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = -139936051;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
