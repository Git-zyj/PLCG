#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2082131044;
short var_3 = (short)-22596;
long long int var_7 = 5326173382876940039LL;
signed char var_8 = (signed char)-126;
unsigned char var_9 = (unsigned char)235;
int zero = 0;
long long int var_10 = -2105483769147777915LL;
unsigned long long int var_11 = 12168997170974998846ULL;
long long int var_12 = -735723733696345714LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
