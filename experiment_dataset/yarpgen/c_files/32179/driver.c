#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)-862;
unsigned long long int var_14 = 14592514376279964436ULL;
int zero = 0;
short var_15 = (short)4659;
unsigned long long int var_16 = 12325565453312671993ULL;
long long int var_17 = 877548760998384357LL;
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
