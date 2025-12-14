#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
long long int var_3 = 424227541282794135LL;
int var_6 = -536956690;
unsigned int var_11 = 3035389032U;
signed char var_13 = (signed char)50;
int zero = 0;
long long int var_16 = -7628721047518670180LL;
unsigned short var_17 = (unsigned short)8984;
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
