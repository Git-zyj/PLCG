#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6513094195773615617LL;
unsigned long long int var_6 = 10171477308556262097ULL;
unsigned long long int var_7 = 7202147711461964537ULL;
short var_14 = (short)31189;
int zero = 0;
short var_16 = (short)1047;
unsigned long long int var_17 = 8400321801937609570ULL;
unsigned int var_18 = 3162492184U;
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
