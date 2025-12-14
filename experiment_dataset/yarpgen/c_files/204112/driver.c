#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)213;
unsigned short var_7 = (unsigned short)48617;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6447619653817525814LL;
int zero = 0;
unsigned int var_14 = 2351068502U;
unsigned long long int var_15 = 1424887377655563059ULL;
signed char var_16 = (signed char)10;
unsigned long long int var_17 = 479833797361240351ULL;
short arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-28513;
}

void checksum() {
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
