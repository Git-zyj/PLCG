#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4882;
short var_3 = (short)24137;
signed char var_4 = (signed char)13;
unsigned short var_6 = (unsigned short)43651;
short var_8 = (short)30730;
unsigned short var_13 = (unsigned short)55972;
int zero = 0;
signed char var_14 = (signed char)-71;
short var_15 = (short)-31203;
unsigned short var_16 = (unsigned short)1709;
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
