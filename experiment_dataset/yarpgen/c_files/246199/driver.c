#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1330319983U;
unsigned int var_1 = 2619315554U;
_Bool var_5 = (_Bool)1;
long long int var_6 = 2045598225486623031LL;
int var_7 = 2133621241;
unsigned long long int var_10 = 11482615953596795339ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = -1039139315;
int var_15 = 1291516437;
unsigned short var_16 = (unsigned short)38515;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
