#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18195158963045663393ULL;
unsigned int var_5 = 887984295U;
short var_9 = (short)-25396;
short var_11 = (short)3266;
unsigned char var_12 = (unsigned char)145;
unsigned char var_16 = (unsigned char)63;
int zero = 0;
short var_17 = (short)-10711;
int var_18 = 15077731;
int var_19 = 131530718;
unsigned char var_20 = (unsigned char)243;
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
