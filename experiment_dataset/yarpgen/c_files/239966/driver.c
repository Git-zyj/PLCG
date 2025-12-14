#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2767567439460280524LL;
unsigned int var_4 = 2186022486U;
short var_5 = (short)-22069;
unsigned long long int var_6 = 13649995776610356857ULL;
_Bool var_13 = (_Bool)1;
long long int var_15 = 1773659030042141343LL;
int zero = 0;
unsigned long long int var_18 = 11897439405671883564ULL;
signed char var_19 = (signed char)-30;
short var_20 = (short)-7981;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
