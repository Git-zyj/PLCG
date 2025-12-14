#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31642;
int var_6 = -1118742668;
_Bool var_7 = (_Bool)1;
long long int var_8 = -1492969054469047490LL;
long long int var_12 = 5769441444464508726LL;
int zero = 0;
short var_14 = (short)20817;
long long int var_15 = -8402073187640878865LL;
unsigned short var_16 = (unsigned short)53547;
unsigned long long int var_17 = 17702134235063894008ULL;
void init() {
}

void checksum() {
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
