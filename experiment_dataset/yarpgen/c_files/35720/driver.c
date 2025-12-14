#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
unsigned int var_2 = 2799495506U;
int var_6 = 1746085149;
unsigned short var_7 = (unsigned short)56586;
unsigned char var_10 = (unsigned char)99;
short var_13 = (short)-14003;
int zero = 0;
unsigned short var_15 = (unsigned short)50282;
unsigned long long int var_16 = 5982032194665733191ULL;
unsigned int var_17 = 2516909101U;
unsigned short var_18 = (unsigned short)5814;
unsigned char var_19 = (unsigned char)187;
unsigned short arr_1 [13] ;
int arr_2 [13] ;
signed char arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30674 : (unsigned short)45027;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 47297999 : 652644964;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)60 : (signed char)103;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
