#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = -5711978553275786752LL;
long long int var_7 = 1680155959482225007LL;
short var_9 = (short)-13394;
unsigned short var_11 = (unsigned short)639;
short var_13 = (short)9633;
long long int var_14 = 7743418608533622634LL;
int zero = 0;
long long int var_16 = -3298764650490588087LL;
unsigned short var_17 = (unsigned short)59403;
short var_18 = (short)-28428;
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
