#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)(-127 - 1);
short var_6 = (short)12646;
signed char var_7 = (signed char)64;
signed char var_9 = (signed char)10;
int var_11 = 259951650;
int zero = 0;
unsigned char var_12 = (unsigned char)133;
unsigned int var_13 = 1938887989U;
signed char var_14 = (signed char)8;
signed char var_15 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
