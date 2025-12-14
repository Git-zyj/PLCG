#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1736105228;
long long int var_3 = -6484996127424687849LL;
_Bool var_4 = (_Bool)0;
int var_6 = -1072784354;
unsigned long long int var_11 = 2094649814422201082ULL;
unsigned int var_13 = 3339837041U;
int zero = 0;
short var_16 = (short)-15501;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7781087757791550562LL;
void init() {
}

void checksum() {
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
