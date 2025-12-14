#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)39;
unsigned char var_5 = (unsigned char)210;
long long int var_7 = -8344036525538455368LL;
int var_15 = -1025458821;
int zero = 0;
unsigned int var_17 = 2466731841U;
short var_18 = (short)-15266;
short var_19 = (short)-22999;
int var_20 = -1812046175;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
