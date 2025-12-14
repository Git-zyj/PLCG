#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1220508605U;
long long int var_11 = -7606224473123120161LL;
short var_16 = (short)3926;
int zero = 0;
unsigned char var_17 = (unsigned char)179;
long long int var_18 = -4015765852123575107LL;
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
