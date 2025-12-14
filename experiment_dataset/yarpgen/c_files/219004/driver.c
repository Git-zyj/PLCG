#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)2252;
signed char var_9 = (signed char)9;
unsigned int var_10 = 2137291321U;
unsigned char var_11 = (unsigned char)184;
int zero = 0;
unsigned int var_15 = 3593319584U;
unsigned long long int var_16 = 246646674005676021ULL;
short var_17 = (short)394;
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
