#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14777304632316427700ULL;
unsigned long long int var_10 = 2179006234475563153ULL;
int zero = 0;
unsigned long long int var_14 = 1782425887828703653ULL;
unsigned long long int var_15 = 12416609896191829856ULL;
int var_16 = -2004725132;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
