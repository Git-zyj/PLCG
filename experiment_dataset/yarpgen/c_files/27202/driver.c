#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3826920752224847395ULL;
short var_1 = (short)30415;
short var_10 = (short)-30676;
short var_13 = (short)21043;
int zero = 0;
unsigned int var_15 = 770647246U;
signed char var_16 = (signed char)78;
unsigned int var_17 = 1392149059U;
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
