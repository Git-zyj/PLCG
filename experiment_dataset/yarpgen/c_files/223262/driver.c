#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3571503664U;
short var_8 = (short)-3881;
unsigned long long int var_14 = 13220443065120500548ULL;
int zero = 0;
unsigned int var_15 = 4169537589U;
signed char var_16 = (signed char)-107;
unsigned int var_17 = 1682194441U;
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
