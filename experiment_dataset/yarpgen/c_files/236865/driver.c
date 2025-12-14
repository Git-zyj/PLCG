#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20728;
int var_5 = 1387450182;
unsigned char var_10 = (unsigned char)11;
unsigned char var_15 = (unsigned char)8;
int zero = 0;
short var_18 = (short)-16097;
unsigned int var_19 = 4179608301U;
unsigned char var_20 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
