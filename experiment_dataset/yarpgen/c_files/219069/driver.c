#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 557494183U;
unsigned short var_1 = (unsigned short)2088;
unsigned short var_4 = (unsigned short)7835;
short var_5 = (short)-11342;
short var_6 = (short)-21249;
short var_7 = (short)25741;
unsigned short var_8 = (unsigned short)35320;
unsigned short var_9 = (unsigned short)21124;
int zero = 0;
unsigned int var_11 = 1004323522U;
unsigned short var_12 = (unsigned short)54808;
unsigned short var_13 = (unsigned short)16411;
unsigned int var_14 = 4054493421U;
int var_15 = 2094440050;
unsigned short var_16 = (unsigned short)4183;
unsigned short var_17 = (unsigned short)15449;
unsigned short var_18 = (unsigned short)27155;
unsigned short var_19 = (unsigned short)35677;
unsigned char var_20 = (unsigned char)81;
unsigned short var_21 = (unsigned short)59572;
unsigned short var_22 = (unsigned short)885;
unsigned int var_23 = 3030938608U;
unsigned short arr_0 [14] [14] ;
unsigned char arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned int arr_4 [23] ;
signed char arr_5 [23] ;
int arr_10 [20] [20] ;
unsigned int arr_12 [20] [20] ;
unsigned char arr_3 [14] ;
unsigned int arr_6 [23] [23] ;
unsigned long long int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)30227;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)23092;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 4170885612U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = -1538215440;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 2738041994U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 726080907U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 12433112312405125813ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
