#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2319811190U;
unsigned long long int var_4 = 11263382334369351648ULL;
unsigned int var_6 = 2237154942U;
unsigned char var_7 = (unsigned char)120;
short var_8 = (short)27863;
unsigned int var_11 = 533863357U;
signed char var_12 = (signed char)-55;
unsigned int var_13 = 3912684659U;
unsigned char var_14 = (unsigned char)20;
short var_15 = (short)-25582;
int zero = 0;
unsigned char var_16 = (unsigned char)92;
int var_17 = 1848203610;
unsigned int var_18 = 289183071U;
unsigned short var_19 = (unsigned short)65495;
unsigned int arr_0 [11] [11] ;
unsigned int arr_1 [11] ;
unsigned char arr_2 [11] ;
unsigned int arr_3 [11] ;
unsigned char arr_4 [11] ;
long long int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 3113051080U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3235845891U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 127075123U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 2075130803569743802LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
