#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1897568416;
unsigned long long int var_3 = 2474686003333220896ULL;
int var_8 = -522475790;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)49;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)13873;
signed char var_16 = (signed char)4;
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
