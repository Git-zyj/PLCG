#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 541148272;
long long int var_4 = -4468879112746637725LL;
unsigned short var_12 = (unsigned short)44044;
unsigned char var_14 = (unsigned char)158;
short var_15 = (short)-12568;
int var_16 = 929358357;
int zero = 0;
int var_17 = -1791761210;
short var_18 = (short)-16890;
unsigned int var_19 = 3631725585U;
void init() {
}

void checksum() {
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
