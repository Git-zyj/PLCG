#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8458;
unsigned char var_3 = (unsigned char)220;
unsigned char var_5 = (unsigned char)5;
long long int var_7 = -6988597693890225726LL;
unsigned short var_8 = (unsigned short)53187;
signed char var_10 = (signed char)65;
unsigned char var_11 = (unsigned char)146;
signed char var_13 = (signed char)-42;
unsigned short var_15 = (unsigned short)46391;
int var_16 = -197122843;
short var_17 = (short)20087;
int zero = 0;
unsigned long long int var_19 = 770530581400400561ULL;
signed char var_20 = (signed char)-21;
short var_21 = (short)29258;
unsigned int var_22 = 4081742510U;
short var_23 = (short)-12847;
signed char var_24 = (signed char)30;
long long int arr_0 [16] ;
signed char arr_1 [16] ;
_Bool arr_2 [16] [16] [16] ;
int arr_3 [16] ;
unsigned long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -4229600130692218334LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 807340545;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 7624052881622116558ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
