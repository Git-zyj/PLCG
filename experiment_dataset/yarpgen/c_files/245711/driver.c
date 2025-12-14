#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)125;
unsigned short var_7 = (unsigned short)2032;
int var_8 = 1910686613;
unsigned char var_10 = (unsigned char)249;
int zero = 0;
short var_15 = (short)16633;
short var_16 = (short)-18332;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
