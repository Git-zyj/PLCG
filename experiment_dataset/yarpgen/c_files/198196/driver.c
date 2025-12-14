#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25515;
short var_4 = (short)2427;
unsigned char var_14 = (unsigned char)26;
int zero = 0;
long long int var_15 = -8970962150785881971LL;
unsigned char var_16 = (unsigned char)200;
unsigned int var_17 = 3764488821U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
