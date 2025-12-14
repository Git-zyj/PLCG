#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4193319878329678764LL;
unsigned long long int var_3 = 10601693562710601376ULL;
int var_5 = 1235662388;
unsigned int var_6 = 2154615657U;
unsigned int var_8 = 1726981323U;
long long int var_13 = 5183953446103933568LL;
int zero = 0;
unsigned int var_15 = 348207168U;
unsigned int var_16 = 1909503062U;
unsigned int var_17 = 2867585562U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
