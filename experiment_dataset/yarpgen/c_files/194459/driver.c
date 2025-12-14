#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
signed char var_3 = (signed char)8;
int var_4 = 1623092568;
unsigned short var_6 = (unsigned short)56887;
short var_8 = (short)-26701;
int var_11 = 1023970311;
unsigned int var_12 = 651144251U;
unsigned char var_13 = (unsigned char)24;
int zero = 0;
unsigned int var_14 = 4289899377U;
unsigned short var_15 = (unsigned short)33646;
signed char var_16 = (signed char)32;
unsigned short var_17 = (unsigned short)18473;
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
