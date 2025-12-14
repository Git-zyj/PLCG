#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26317;
int var_8 = -1182974541;
unsigned char var_11 = (unsigned char)16;
unsigned char var_14 = (unsigned char)184;
int zero = 0;
unsigned int var_17 = 223460479U;
unsigned long long int var_18 = 6087919829269757630ULL;
void init() {
}

void checksum() {
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
