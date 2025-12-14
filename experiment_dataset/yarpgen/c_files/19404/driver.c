#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46062;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 13240086983768748668ULL;
short var_3 = (short)-3020;
unsigned long long int var_4 = 13335655149652746019ULL;
long long int var_5 = -58274489571062265LL;
unsigned long long int var_6 = 6052058074182939848ULL;
unsigned long long int var_8 = 18371059317274499172ULL;
long long int var_9 = -2161075526943806865LL;
unsigned char var_10 = (unsigned char)8;
int zero = 0;
unsigned short var_11 = (unsigned short)19193;
unsigned short var_12 = (unsigned short)32820;
unsigned long long int var_13 = 11109927345626162213ULL;
short var_14 = (short)26833;
_Bool var_15 = (_Bool)1;
int var_16 = -1946238767;
unsigned char var_17 = (unsigned char)239;
signed char arr_4 [13] ;
unsigned short arr_12 [16] ;
unsigned short arr_8 [13] ;
unsigned char arr_13 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)6410;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)62602;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)134;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
