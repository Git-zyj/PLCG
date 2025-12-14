#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1538321526;
int var_1 = -153857066;
signed char var_14 = (signed char)47;
int zero = 0;
long long int var_15 = -4937273002924806759LL;
int var_16 = -1840287512;
short var_17 = (short)29927;
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
