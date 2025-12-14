#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 224979997U;
long long int var_2 = -1165563213049564960LL;
unsigned short var_7 = (unsigned short)40332;
unsigned short var_11 = (unsigned short)11803;
long long int var_13 = 8563881265093993266LL;
int zero = 0;
long long int var_14 = 4847642599157073499LL;
unsigned long long int var_15 = 13274010999501098509ULL;
int var_16 = 1556317462;
_Bool var_17 = (_Bool)1;
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
