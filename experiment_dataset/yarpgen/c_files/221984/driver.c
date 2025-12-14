#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)985;
signed char var_5 = (signed char)8;
unsigned int var_7 = 1292129147U;
int zero = 0;
unsigned long long int var_11 = 11771295678035235511ULL;
unsigned char var_12 = (unsigned char)181;
signed char var_13 = (signed char)96;
unsigned int var_14 = 1766148746U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
