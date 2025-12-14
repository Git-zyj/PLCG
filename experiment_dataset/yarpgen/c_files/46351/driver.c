#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)27285;
long long int var_7 = 4148814129619335399LL;
short var_10 = (short)-15150;
long long int var_12 = -7376290274861929312LL;
unsigned char var_14 = (unsigned char)227;
int zero = 0;
unsigned int var_16 = 3123142197U;
unsigned short var_17 = (unsigned short)10634;
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
