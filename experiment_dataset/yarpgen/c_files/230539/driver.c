#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27641;
unsigned short var_2 = (unsigned short)56935;
signed char var_8 = (signed char)-53;
int zero = 0;
unsigned char var_12 = (unsigned char)57;
long long int var_13 = 2189905184839279647LL;
unsigned short var_14 = (unsigned short)46695;
unsigned short var_15 = (unsigned short)5258;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
