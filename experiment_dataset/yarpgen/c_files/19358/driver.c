#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2243584811U;
unsigned short var_7 = (unsigned short)47949;
unsigned short var_8 = (unsigned short)61475;
int var_11 = -56946473;
int var_16 = -617606008;
int zero = 0;
short var_17 = (short)2400;
unsigned int var_18 = 1057114223U;
unsigned int var_19 = 313689940U;
int var_20 = 2002065941;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
