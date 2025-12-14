#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12310366840673848334ULL;
unsigned short var_1 = (unsigned short)30495;
signed char var_3 = (signed char)-23;
int var_4 = 87429066;
signed char var_5 = (signed char)60;
short var_6 = (short)-18188;
unsigned short var_7 = (unsigned short)2196;
unsigned char var_10 = (unsigned char)11;
unsigned char var_11 = (unsigned char)204;
unsigned char var_13 = (unsigned char)92;
int zero = 0;
signed char var_14 = (signed char)5;
unsigned int var_15 = 2051533022U;
short var_16 = (short)8155;
signed char var_17 = (signed char)-99;
short var_18 = (short)-12661;
short var_19 = (short)20352;
unsigned int var_20 = 890539004U;
unsigned char var_21 = (unsigned char)33;
unsigned int var_22 = 799076589U;
unsigned char arr_1 [23] [23] ;
int arr_2 [23] [23] ;
signed char arr_4 [23] [23] ;
signed char arr_5 [23] ;
short arr_7 [23] [23] ;
signed char arr_8 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -792038918;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-9928;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)20;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
