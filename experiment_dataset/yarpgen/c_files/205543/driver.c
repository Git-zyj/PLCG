#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52974;
signed char var_3 = (signed char)42;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)128;
short var_8 = (short)28740;
unsigned int var_9 = 4077473762U;
int zero = 0;
unsigned int var_11 = 2812806459U;
unsigned char var_12 = (unsigned char)253;
unsigned int var_13 = 550229617U;
unsigned char var_14 = (unsigned char)54;
_Bool var_15 = (_Bool)0;
unsigned char arr_0 [19] ;
unsigned int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1170998832U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
