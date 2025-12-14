#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 8174911951377712372ULL;
short var_10 = (short)-12977;
unsigned short var_11 = (unsigned short)178;
int zero = 0;
short var_15 = (short)-26898;
unsigned char var_16 = (unsigned char)160;
short var_17 = (short)-17680;
void init() {
}

void checksum() {
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
