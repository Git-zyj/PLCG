#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 907013019;
short var_2 = (short)-16357;
short var_4 = (short)24411;
short var_7 = (short)24038;
long long int var_12 = -2158783834830274053LL;
signed char var_13 = (signed char)61;
int zero = 0;
unsigned short var_14 = (unsigned short)7407;
int var_15 = -1919806238;
int var_16 = 2041695009;
int var_17 = 1334415970;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
