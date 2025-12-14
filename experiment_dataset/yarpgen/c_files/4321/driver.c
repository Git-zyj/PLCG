#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9369580341200762022ULL;
unsigned int var_13 = 1422841896U;
int zero = 0;
signed char var_14 = (signed char)-22;
unsigned int var_15 = 1170813273U;
unsigned long long int var_16 = 9342413901973142867ULL;
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
