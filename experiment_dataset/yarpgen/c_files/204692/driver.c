#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
short var_3 = (short)-31989;
int var_5 = -1742844605;
unsigned char var_6 = (unsigned char)83;
short var_7 = (short)-23986;
unsigned long long int var_8 = 9138574312407442144ULL;
unsigned long long int var_9 = 1512368549591271784ULL;
unsigned long long int var_14 = 17336166099124770232ULL;
int var_15 = 67058610;
int zero = 0;
unsigned char var_16 = (unsigned char)230;
int var_17 = -1912817842;
signed char var_18 = (signed char)93;
signed char var_19 = (signed char)-36;
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
