#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29622;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 1946410232U;
unsigned long long int var_13 = 2089293267254695738ULL;
int zero = 0;
unsigned long long int var_14 = 12989908987764888710ULL;
unsigned long long int var_15 = 8275498143278388728ULL;
unsigned char var_16 = (unsigned char)202;
unsigned long long int var_17 = 6106387116898141000ULL;
void init() {
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
