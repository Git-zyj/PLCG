#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1850702330269425136LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = 6803450856279686663LL;
long long int var_18 = -1646091820625333329LL;
unsigned short var_19 = (unsigned short)63819;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
