#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
short var_1 = (short)-2657;
short var_2 = (short)8419;
signed char var_3 = (signed char)41;
signed char var_4 = (signed char)4;
short var_5 = (short)9321;
unsigned long long int var_8 = 5620291075108714829ULL;
unsigned long long int var_9 = 12529797811561318402ULL;
int zero = 0;
unsigned long long int var_10 = 16329348413104288049ULL;
int var_11 = 330381072;
unsigned char var_12 = (unsigned char)253;
unsigned char var_13 = (unsigned char)62;
short arr_4 [19] [19] ;
int arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-32118 : (short)30229;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -1448357845 : -690871241;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
