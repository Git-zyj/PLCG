#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1173746327468232304ULL;
unsigned short var_8 = (unsigned short)48876;
long long int var_10 = -3650158508462831913LL;
int zero = 0;
long long int var_17 = 2441266389092426793LL;
int var_18 = 456808452;
long long int var_19 = -7203888232876114659LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)20553;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
