#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_4 = (unsigned short)45268;
unsigned int var_5 = 1551335069U;
int var_6 = 1977016986;
long long int var_11 = -3376576902183430034LL;
int zero = 0;
unsigned char var_12 = (unsigned char)206;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-134;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)24;
long long int var_17 = 7870332258114505521LL;
unsigned short arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)47059;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)63014;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
