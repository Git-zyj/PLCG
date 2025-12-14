#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)228;
int var_4 = 1374291404;
unsigned int var_9 = 3228018086U;
int var_10 = 1772793874;
short var_11 = (short)30198;
signed char var_15 = (signed char)109;
short var_16 = (short)24774;
signed char var_17 = (signed char)-8;
unsigned int var_19 = 1468252266U;
int zero = 0;
short var_20 = (short)-29166;
signed char var_21 = (signed char)-73;
short var_22 = (short)10771;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
