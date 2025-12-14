#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)70;
unsigned short var_5 = (unsigned short)26276;
short var_6 = (short)30323;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)90;
unsigned short var_14 = (unsigned short)53398;
_Bool var_15 = (_Bool)1;
long long int var_16 = -577227484045072059LL;
unsigned short var_17 = (unsigned short)61836;
long long int var_18 = 4846009846709760165LL;
short arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)7240;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
