#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)52195;
int var_3 = -228736700;
unsigned char var_4 = (unsigned char)25;
unsigned long long int var_5 = 2113638637590067876ULL;
int zero = 0;
unsigned long long int var_16 = 17241317300476482926ULL;
long long int var_17 = -6848495885928840214LL;
int var_18 = -1886045602;
_Bool var_19 = (_Bool)1;
int var_20 = 1453933541;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
