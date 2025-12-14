#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1737514075870987148ULL;
unsigned short var_1 = (unsigned short)12876;
unsigned char var_4 = (unsigned char)239;
_Bool var_14 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-7183;
unsigned int var_21 = 3770908585U;
unsigned long long int var_22 = 4693972151902177211ULL;
unsigned int var_23 = 639202851U;
short arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)12973;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
