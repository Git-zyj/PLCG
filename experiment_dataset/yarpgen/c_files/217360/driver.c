#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-116;
unsigned short var_7 = (unsigned short)6243;
unsigned char var_8 = (unsigned char)199;
unsigned int var_10 = 643472567U;
unsigned int var_11 = 3036408235U;
int zero = 0;
unsigned char var_18 = (unsigned char)64;
unsigned char var_19 = (unsigned char)11;
void init() {
}

void checksum() {
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
