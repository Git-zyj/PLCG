#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17181640824698164902ULL;
unsigned long long int var_7 = 11515396954447288846ULL;
unsigned char var_13 = (unsigned char)205;
signed char var_16 = (signed char)84;
unsigned int var_18 = 2676589994U;
int zero = 0;
unsigned long long int var_20 = 13143556634693340466ULL;
unsigned int var_21 = 2011944302U;
short var_22 = (short)12396;
signed char var_23 = (signed char)98;
unsigned int var_24 = 3216158244U;
unsigned char arr_1 [25] [25] ;
signed char arr_2 [25] ;
int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -742453869;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
