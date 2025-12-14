#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-34;
signed char var_5 = (signed char)59;
unsigned short var_8 = (unsigned short)6827;
long long int var_9 = 5166950329154348155LL;
unsigned char var_10 = (unsigned char)179;
unsigned int var_11 = 1899022291U;
int zero = 0;
long long int var_15 = 2201993703770517940LL;
long long int var_16 = 4173520826663129487LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
