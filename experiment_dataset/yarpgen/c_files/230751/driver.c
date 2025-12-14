#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 13112633889497386359ULL;
unsigned int var_15 = 1387553265U;
short var_16 = (short)-20646;
int zero = 0;
signed char var_18 = (signed char)-26;
unsigned short var_19 = (unsigned short)60162;
unsigned char var_20 = (unsigned char)245;
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
