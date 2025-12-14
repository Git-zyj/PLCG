#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)135;
signed char var_11 = (signed char)114;
short var_14 = (short)-397;
int zero = 0;
int var_17 = -1589334379;
unsigned long long int var_18 = 9525383033803782683ULL;
int var_19 = -593435520;
unsigned short var_20 = (unsigned short)29313;
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
