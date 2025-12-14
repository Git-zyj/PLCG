#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 297597370619988883ULL;
int var_2 = -1114404113;
short var_4 = (short)30490;
unsigned int var_5 = 1018043508U;
unsigned long long int var_7 = 15041676141139831148ULL;
short var_8 = (short)-25885;
int zero = 0;
long long int var_10 = -2215322089388835132LL;
long long int var_11 = -1461406273403639004LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
