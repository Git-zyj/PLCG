#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned char var_2 = (unsigned char)204;
short var_4 = (short)14885;
int var_5 = -2024656994;
unsigned int var_6 = 2847354515U;
short var_9 = (short)-26576;
short var_11 = (short)19724;
short var_12 = (short)23877;
int var_13 = 345119928;
int zero = 0;
int var_16 = -162726157;
unsigned char var_17 = (unsigned char)161;
unsigned int var_18 = 2957582088U;
unsigned int var_19 = 881966200U;
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
