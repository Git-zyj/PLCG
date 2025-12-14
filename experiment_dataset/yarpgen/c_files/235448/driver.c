#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)56026;
unsigned int var_6 = 1603408782U;
short var_9 = (short)-17988;
signed char var_10 = (signed char)-20;
unsigned char var_11 = (unsigned char)239;
short var_13 = (short)-29361;
int zero = 0;
int var_14 = -760423564;
long long int var_15 = -343490498285993323LL;
unsigned int var_16 = 1566650642U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
