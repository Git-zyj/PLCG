#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18721;
short var_3 = (short)-22405;
long long int var_13 = -7280132534863428683LL;
int zero = 0;
unsigned short var_14 = (unsigned short)63919;
signed char var_15 = (signed char)-51;
unsigned int var_16 = 366792881U;
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
