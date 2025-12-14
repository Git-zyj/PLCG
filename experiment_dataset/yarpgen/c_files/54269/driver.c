#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
unsigned short var_5 = (unsigned short)24262;
_Bool var_7 = (_Bool)1;
long long int var_10 = 1408882920904700160LL;
unsigned short var_11 = (unsigned short)30384;
int zero = 0;
unsigned char var_13 = (unsigned char)24;
unsigned char var_14 = (unsigned char)137;
unsigned long long int var_15 = 15836706635947958455ULL;
unsigned int arr_3 [18] [18] ;
short arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 2557732116U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-24643;
}

void checksum() {
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
