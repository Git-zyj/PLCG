#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
int var_3 = 934744493;
int var_4 = -584776646;
long long int var_7 = 5559628521160744658LL;
long long int var_9 = 6640534317284510256LL;
int var_10 = -1443504413;
unsigned int var_12 = 4124741552U;
long long int var_13 = -4473608129390535653LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 6899510680344353457ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
