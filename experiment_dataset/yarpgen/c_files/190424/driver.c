#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
long long int var_1 = 4458459523064095298LL;
long long int var_2 = -5611973129660415130LL;
short var_7 = (short)-8167;
unsigned short var_8 = (unsigned short)29893;
int zero = 0;
unsigned char var_12 = (unsigned char)42;
int var_13 = 2052348441;
unsigned long long int var_14 = 13905274594741727241ULL;
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
