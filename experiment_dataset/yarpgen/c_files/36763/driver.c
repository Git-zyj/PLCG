#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2879038415U;
unsigned int var_4 = 1262565191U;
unsigned char var_5 = (unsigned char)67;
int var_6 = -370819285;
int zero = 0;
unsigned char var_11 = (unsigned char)30;
unsigned short var_12 = (unsigned short)20687;
signed char var_13 = (signed char)109;
unsigned char var_14 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
