#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1544455717039776376ULL;
signed char var_2 = (signed char)97;
unsigned char var_3 = (unsigned char)33;
unsigned long long int var_4 = 8388849130891855492ULL;
unsigned long long int var_8 = 6052212579333199233ULL;
unsigned char var_13 = (unsigned char)89;
int zero = 0;
unsigned char var_14 = (unsigned char)63;
unsigned int var_15 = 4119988571U;
unsigned char var_16 = (unsigned char)7;
unsigned long long int var_17 = 2857979676797568007ULL;
unsigned char arr_2 [21] ;
unsigned char arr_3 [21] [21] [21] ;
unsigned char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)37 : (unsigned char)225;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
