#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
short var_5 = (short)-5619;
unsigned int var_6 = 2818033605U;
short var_8 = (short)-23444;
short var_14 = (short)-12313;
int zero = 0;
short var_15 = (short)-1936;
short var_16 = (short)-31505;
unsigned int var_17 = 3958499525U;
unsigned int var_18 = 3231407332U;
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
