#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2844981164U;
short var_2 = (short)26440;
unsigned char var_8 = (unsigned char)146;
unsigned int var_9 = 1274678561U;
unsigned char var_11 = (unsigned char)56;
unsigned int var_12 = 1951951160U;
unsigned char var_13 = (unsigned char)68;
int var_14 = 965809519;
unsigned int var_15 = 2809236913U;
int zero = 0;
unsigned char var_16 = (unsigned char)170;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)192;
unsigned char var_19 = (unsigned char)190;
unsigned char var_20 = (unsigned char)34;
unsigned int var_21 = 3281141019U;
short var_22 = (short)24307;
unsigned char arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
unsigned char arr_4 [16] [16] ;
_Bool arr_2 [22] [22] ;
signed char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-45;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
