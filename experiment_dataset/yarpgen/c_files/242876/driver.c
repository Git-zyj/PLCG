#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -128628074;
unsigned char var_4 = (unsigned char)116;
long long int var_6 = -7503269893632668676LL;
int zero = 0;
short var_12 = (short)-28143;
unsigned int var_13 = 2216743602U;
short var_14 = (short)-14765;
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
