#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28014;
unsigned char var_3 = (unsigned char)225;
int var_8 = -1471268812;
unsigned short var_10 = (unsigned short)27495;
unsigned char var_11 = (unsigned char)64;
unsigned int var_12 = 3173118651U;
int zero = 0;
unsigned char var_14 = (unsigned char)205;
unsigned short var_15 = (unsigned short)3436;
unsigned char var_16 = (unsigned char)48;
signed char var_17 = (signed char)50;
signed char var_18 = (signed char)-98;
signed char arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)40629;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)191;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
