#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51658;
unsigned short var_7 = (unsigned short)35472;
long long int var_14 = 1472108704812225378LL;
int zero = 0;
unsigned int var_17 = 1777928139U;
unsigned char var_18 = (unsigned char)112;
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
