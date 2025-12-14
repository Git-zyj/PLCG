#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned char var_8 = (unsigned char)88;
unsigned long long int var_12 = 4270777698172922827ULL;
unsigned int var_13 = 546533007U;
unsigned char var_15 = (unsigned char)64;
unsigned char var_17 = (unsigned char)190;
int zero = 0;
int var_18 = 2090480674;
unsigned int var_19 = 2551919624U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
