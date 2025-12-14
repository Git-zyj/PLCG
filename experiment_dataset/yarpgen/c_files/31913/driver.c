#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)21;
unsigned long long int var_3 = 15034138827168331571ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 294439545409890712LL;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)16638;
int zero = 0;
unsigned short var_16 = (unsigned short)33977;
unsigned int var_17 = 3607746716U;
long long int var_18 = -4614752576090226267LL;
void init() {
}

void checksum() {
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
