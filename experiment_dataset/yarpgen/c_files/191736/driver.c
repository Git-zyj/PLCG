#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1469233902U;
unsigned int var_3 = 4098946536U;
signed char var_13 = (signed char)-97;
int zero = 0;
short var_17 = (short)24140;
unsigned int var_18 = 3076977914U;
long long int var_19 = 1726801565444905566LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
