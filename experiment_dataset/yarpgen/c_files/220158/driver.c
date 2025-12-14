#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2965541479U;
unsigned char var_5 = (unsigned char)222;
unsigned char var_14 = (unsigned char)219;
int zero = 0;
unsigned int var_18 = 1468904309U;
long long int var_19 = -7856825237757250532LL;
long long int var_20 = 3274399319296495831LL;
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
