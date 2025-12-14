#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22041;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)14567;
unsigned short var_3 = (unsigned short)17211;
int var_4 = 523881123;
short var_6 = (short)30692;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)158;
unsigned short var_9 = (unsigned short)59467;
int zero = 0;
unsigned short var_11 = (unsigned short)31536;
unsigned short var_12 = (unsigned short)16953;
short var_13 = (short)-21047;
unsigned int var_14 = 972736686U;
int var_15 = -1258757605;
unsigned long long int var_16 = 7027844670376502622ULL;
unsigned char var_17 = (unsigned char)102;
int var_18 = 1892404036;
unsigned long long int var_19 = 6371040218690871458ULL;
unsigned char var_20 = (unsigned char)236;
int var_21 = -1302971201;
int var_22 = 357587699;
unsigned char var_23 = (unsigned char)243;
unsigned short arr_0 [19] ;
short arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
signed char arr_3 [19] [19] ;
unsigned char arr_7 [19] ;
signed char arr_8 [19] [19] ;
unsigned short arr_9 [19] ;
unsigned short arr_10 [19] [19] ;
unsigned int arr_13 [19] [19] ;
unsigned int arr_16 [19] [19] [19] [19] ;
unsigned int arr_18 [19] ;
unsigned int arr_23 [20] ;
unsigned char arr_24 [20] ;
signed char arr_5 [19] [19] ;
int arr_6 [19] [19] ;
int arr_11 [19] [19] [19] ;
int arr_14 [19] ;
int arr_22 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)27529;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)7343;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)16749;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned short)62754;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)3809;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = 1410471145U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 1085843933U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 2596791999U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = 730919960U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 1622706465;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -1184570859;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = -325388646;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1961270330 : 431017356;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
