#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1029915968059030928LL;
long long int var_8 = 1355298469042768084LL;
int var_11 = 867830905;
int var_13 = 445063423;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = 844771693;
signed char var_17 = (signed char)127;
void init() {
}

void checksum() {
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
