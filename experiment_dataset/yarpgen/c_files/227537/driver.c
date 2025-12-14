#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27784;
unsigned int var_1 = 1852261178U;
unsigned long long int var_3 = 13093091520803084003ULL;
short var_6 = (short)-14986;
signed char var_7 = (signed char)-28;
int zero = 0;
int var_15 = -1299440837;
int var_16 = 1495509124;
int var_17 = 1711473428;
short var_18 = (short)-6506;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
