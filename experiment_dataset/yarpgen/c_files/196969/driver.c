#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3807627804588757375LL;
unsigned short var_2 = (unsigned short)57142;
int var_3 = -1384029883;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1968370537U;
int var_7 = 1303587681;
unsigned int var_10 = 300336575U;
unsigned int var_11 = 2443270236U;
short var_12 = (short)-20044;
int zero = 0;
unsigned short var_14 = (unsigned short)64217;
unsigned int var_15 = 1004306565U;
short var_16 = (short)-4986;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2571695487U;
int var_19 = 1031276417;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1278992204773221055LL;
unsigned int var_22 = 2714681856U;
unsigned char arr_2 [21] [21] ;
long long int arr_4 [21] ;
short arr_7 [23] ;
_Bool arr_8 [23] [23] ;
unsigned int arr_11 [23] ;
int arr_14 [23] [23] ;
unsigned int arr_17 [12] [12] ;
long long int arr_20 [12] ;
int arr_5 [21] [21] ;
unsigned int arr_6 [21] ;
unsigned int arr_15 [23] ;
int arr_16 [23] ;
unsigned int arr_21 [12] [12] ;
short arr_22 [12] ;
unsigned int arr_23 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 5372400013494205382LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-5973;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 1987251687U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = -2067226990;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = 3546821187U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = 717731159675474500LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -1454231615;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 1854970364U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 716226275U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = -1976624115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = 944954014U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (short)15442;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = 3568086286U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
