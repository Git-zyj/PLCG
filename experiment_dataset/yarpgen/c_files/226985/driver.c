#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1166;
long long int var_5 = 2357844426367611734LL;
unsigned short var_7 = (unsigned short)40857;
unsigned int var_16 = 3575720111U;
unsigned char var_18 = (unsigned char)237;
long long int var_19 = 6864775557000491110LL;
int zero = 0;
unsigned int var_20 = 1998096827U;
unsigned char var_21 = (unsigned char)143;
int var_22 = -411502508;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
