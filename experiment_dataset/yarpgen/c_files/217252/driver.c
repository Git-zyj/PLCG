#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 118893532U;
unsigned int var_1 = 2796212005U;
unsigned int var_10 = 351237426U;
short var_13 = (short)-28608;
int zero = 0;
long long int var_15 = 1757590396479710915LL;
unsigned int var_16 = 1454959130U;
void init() {
}

void checksum() {
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
