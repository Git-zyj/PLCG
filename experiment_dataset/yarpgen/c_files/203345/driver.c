#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13715;
long long int var_1 = -890192940330144653LL;
int var_2 = 65231782;
int var_3 = -1140607684;
short var_4 = (short)-6414;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)15023;
_Bool var_8 = (_Bool)1;
short var_11 = (short)-24126;
signed char var_12 = (signed char)-64;
unsigned long long int var_13 = 8093804355600798683ULL;
unsigned char var_14 = (unsigned char)67;
int zero = 0;
unsigned short var_15 = (unsigned short)22208;
unsigned int var_16 = 2579879775U;
long long int var_17 = 7376955255041895200LL;
short var_18 = (short)-9072;
long long int arr_2 [16] ;
int arr_5 [16] [16] [16] ;
unsigned char arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2649713401183527834LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 196718434;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)199;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
