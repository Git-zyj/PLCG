#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 349075132U;
unsigned int var_5 = 1248117547U;
unsigned short var_12 = (unsigned short)42709;
int zero = 0;
unsigned int var_15 = 2614014893U;
long long int var_16 = 7060150510581541625LL;
signed char var_17 = (signed char)4;
void init() {
}

void checksum() {
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
