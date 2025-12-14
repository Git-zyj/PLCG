#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1849664361;
int var_7 = -1754471043;
unsigned long long int var_10 = 5126031895359765311ULL;
unsigned char var_13 = (unsigned char)161;
int zero = 0;
unsigned char var_16 = (unsigned char)47;
long long int var_17 = -2605679604219538393LL;
int var_18 = -2078272231;
unsigned long long int var_19 = 8232992869107045358ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
