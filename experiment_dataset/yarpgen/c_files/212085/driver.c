#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 6590132926440227747ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_13 = (short)-7211;
short var_14 = (short)27250;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)19608;
long long int var_17 = -2193751438370417452LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
