#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19859;
unsigned int var_4 = 2401790761U;
short var_6 = (short)10517;
long long int var_9 = -2200006351479855028LL;
int var_10 = -1493109472;
int var_12 = -1064734941;
int zero = 0;
unsigned int var_14 = 469159530U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)12672;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
