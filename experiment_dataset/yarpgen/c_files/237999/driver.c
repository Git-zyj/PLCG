#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3356142095U;
unsigned long long int var_7 = 1368954478731805045ULL;
unsigned int var_11 = 1465358471U;
int zero = 0;
signed char var_15 = (signed char)-87;
signed char var_16 = (signed char)53;
unsigned char var_17 = (unsigned char)60;
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
