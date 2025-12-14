#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 222268702;
short var_3 = (short)14898;
short var_5 = (short)27267;
unsigned int var_7 = 1562751821U;
int var_11 = -2145566642;
unsigned int var_12 = 1152247122U;
int zero = 0;
short var_15 = (short)-1281;
long long int var_16 = 8461839541976816492LL;
short var_17 = (short)-20137;
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
