#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)69;
short var_7 = (short)2425;
unsigned char var_10 = (unsigned char)232;
unsigned char var_18 = (unsigned char)42;
int zero = 0;
signed char var_20 = (signed char)77;
short var_21 = (short)15715;
signed char var_22 = (signed char)56;
int var_23 = 1136032165;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
