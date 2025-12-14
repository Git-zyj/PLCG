#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
unsigned int var_6 = 54561827U;
unsigned int var_7 = 370304708U;
unsigned short var_9 = (unsigned short)36000;
unsigned int var_11 = 369078966U;
unsigned short var_13 = (unsigned short)59300;
int zero = 0;
short var_14 = (short)4459;
int var_15 = -1870165681;
void init() {
}

void checksum() {
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
