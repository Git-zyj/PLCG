#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)24666;
int var_11 = -825458647;
int var_12 = 1747507836;
signed char var_15 = (signed char)-73;
unsigned char var_16 = (unsigned char)86;
int zero = 0;
unsigned int var_17 = 1862942326U;
short var_18 = (short)11221;
short var_19 = (short)6817;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
