#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-79;
unsigned short var_6 = (unsigned short)56270;
int var_7 = 1230939734;
unsigned short var_10 = (unsigned short)6811;
int zero = 0;
signed char var_16 = (signed char)12;
unsigned short var_17 = (unsigned short)43774;
unsigned short var_18 = (unsigned short)33712;
void init() {
}

void checksum() {
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
