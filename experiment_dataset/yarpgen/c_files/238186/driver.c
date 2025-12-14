#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-358;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1317818331U;
int var_9 = -276477935;
short var_12 = (short)7304;
int zero = 0;
unsigned long long int var_13 = 12007510668839407642ULL;
unsigned char var_14 = (unsigned char)8;
unsigned char var_15 = (unsigned char)16;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 429423852U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
