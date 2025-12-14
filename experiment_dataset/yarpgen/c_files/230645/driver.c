#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_5 = -1770359861352536914LL;
long long int var_8 = -8125915716536817721LL;
int var_9 = -1185385551;
int var_13 = 1045947314;
int zero = 0;
int var_16 = 1468760606;
unsigned long long int var_17 = 13515868619425915111ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 1041045598642003892ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
