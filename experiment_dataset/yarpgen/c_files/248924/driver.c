#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3395123015U;
unsigned int var_2 = 3472528253U;
unsigned long long int var_6 = 1460881701511861307ULL;
int var_8 = 748521946;
int var_10 = -199327325;
unsigned int var_12 = 3505627497U;
int zero = 0;
int var_14 = 507352200;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1551576834U;
long long int var_17 = 3882131804721718058LL;
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
