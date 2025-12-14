#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)56;
int var_11 = 756263918;
unsigned char var_13 = (unsigned char)203;
unsigned char var_15 = (unsigned char)239;
int zero = 0;
unsigned char var_16 = (unsigned char)27;
short var_17 = (short)15338;
unsigned short var_18 = (unsigned short)24858;
unsigned char var_19 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
