#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-7602;
unsigned long long int var_13 = 13875683380649670085ULL;
unsigned long long int var_14 = 1113832584587542536ULL;
short var_15 = (short)-12438;
int zero = 0;
int var_18 = -574768421;
unsigned long long int var_19 = 15698185262780285380ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
