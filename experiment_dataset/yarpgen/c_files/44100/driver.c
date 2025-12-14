#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 886954102;
unsigned int var_8 = 1451016487U;
unsigned short var_10 = (unsigned short)22459;
int zero = 0;
unsigned char var_16 = (unsigned char)214;
long long int var_17 = -5276020220590110061LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
