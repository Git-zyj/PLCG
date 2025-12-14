#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19013;
unsigned char var_5 = (unsigned char)162;
unsigned short var_13 = (unsigned short)45973;
int zero = 0;
int var_14 = -1753784051;
short var_15 = (short)19707;
unsigned char var_16 = (unsigned char)36;
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
