#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned char var_3 = (unsigned char)92;
unsigned int var_10 = 2655993724U;
_Bool var_12 = (_Bool)1;
signed char var_16 = (signed char)-25;
int zero = 0;
unsigned int var_17 = 165505214U;
unsigned char var_18 = (unsigned char)53;
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
