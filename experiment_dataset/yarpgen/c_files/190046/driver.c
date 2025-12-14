#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)104;
int var_3 = -1062605693;
signed char var_7 = (signed char)27;
signed char var_11 = (signed char)119;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5460781496284049755LL;
long long int var_17 = -903375717932095871LL;
void init() {
}

void checksum() {
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
