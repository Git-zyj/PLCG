#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1169163759;
unsigned long long int var_4 = 15631591094458443848ULL;
unsigned short var_7 = (unsigned short)44019;
int var_12 = -2065313635;
int zero = 0;
long long int var_15 = -831604816136052260LL;
signed char var_16 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
