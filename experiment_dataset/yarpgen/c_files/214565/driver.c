#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 61871678U;
unsigned short var_1 = (unsigned short)61187;
signed char var_3 = (signed char)103;
short var_7 = (short)-28523;
unsigned int var_9 = 1556895457U;
int var_11 = 1652886178;
int zero = 0;
unsigned short var_13 = (unsigned short)55634;
short var_14 = (short)24861;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
