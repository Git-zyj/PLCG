#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
short var_3 = (short)24620;
int var_7 = -2102943475;
int var_8 = 177653586;
unsigned short var_11 = (unsigned short)64323;
int zero = 0;
unsigned int var_14 = 181690003U;
unsigned char var_15 = (unsigned char)152;
unsigned long long int var_16 = 16224339250813374790ULL;
_Bool var_17 = (_Bool)0;
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
