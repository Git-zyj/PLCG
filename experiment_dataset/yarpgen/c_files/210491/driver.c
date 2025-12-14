#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)29;
short var_8 = (short)-17853;
unsigned long long int var_12 = 1384095838429476058ULL;
int zero = 0;
unsigned int var_19 = 649328687U;
long long int var_20 = 9006073109180812728LL;
signed char var_21 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
