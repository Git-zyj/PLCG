#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3180904837U;
_Bool var_12 = (_Bool)1;
int var_14 = -1462272127;
int zero = 0;
unsigned short var_15 = (unsigned short)22717;
unsigned long long int var_16 = 1424476853726794577ULL;
long long int var_17 = 4548105899616101674LL;
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
