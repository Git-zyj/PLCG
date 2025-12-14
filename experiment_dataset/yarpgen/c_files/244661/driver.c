#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18723;
unsigned char var_2 = (unsigned char)94;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)7150;
unsigned short var_5 = (unsigned short)2467;
unsigned long long int var_6 = 14464673822069099126ULL;
unsigned short var_8 = (unsigned short)8900;
int var_10 = 983269837;
short var_11 = (short)29024;
int zero = 0;
int var_12 = 904594499;
unsigned int var_13 = 2735284881U;
unsigned long long int var_14 = 15052239553225880346ULL;
int var_15 = -2005599201;
int var_16 = 861447343;
unsigned int var_17 = 3644286462U;
unsigned int arr_0 [23] ;
unsigned int arr_2 [23] ;
unsigned int arr_6 [16] ;
unsigned long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1862568634U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2700500590U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 252634111U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 779873554102762843ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
