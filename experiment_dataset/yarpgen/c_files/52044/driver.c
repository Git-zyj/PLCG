#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)39;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)144;
int zero = 0;
unsigned char var_15 = (unsigned char)63;
unsigned int var_16 = 1668310446U;
long long int var_17 = -2950219678277261977LL;
unsigned int var_18 = 535746427U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
