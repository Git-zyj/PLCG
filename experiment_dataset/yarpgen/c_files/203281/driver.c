#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 88198516;
unsigned char var_3 = (unsigned char)247;
unsigned char var_4 = (unsigned char)127;
int var_5 = 646639767;
unsigned char var_6 = (unsigned char)242;
int var_7 = -30791171;
unsigned char var_10 = (unsigned char)192;
int var_18 = 94233724;
int zero = 0;
unsigned char var_20 = (unsigned char)81;
int var_21 = 1360493033;
int var_22 = 854665181;
unsigned char var_23 = (unsigned char)191;
int var_24 = 328972669;
int var_25 = -802206230;
unsigned char arr_0 [24] ;
int arr_3 [24] [24] ;
unsigned char arr_6 [12] ;
int arr_9 [14] ;
int arr_10 [14] ;
int arr_13 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 1255748033;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)161 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -1121213922;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 640046175;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 1972884487 : 406230089;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
