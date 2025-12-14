#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30826;
unsigned char var_1 = (unsigned char)225;
unsigned char var_2 = (unsigned char)66;
unsigned int var_3 = 2507620867U;
int zero = 0;
unsigned char var_12 = (unsigned char)17;
signed char var_13 = (signed char)30;
unsigned int var_14 = 3338082074U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
