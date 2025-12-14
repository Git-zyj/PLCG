#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)64;
int var_9 = 473821240;
short var_10 = (short)-28331;
short var_11 = (short)-30397;
int zero = 0;
signed char var_16 = (signed char)38;
int var_17 = 1115990969;
short var_18 = (short)-18235;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
