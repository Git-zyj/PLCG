#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1925259518;
short var_1 = (short)20196;
short var_5 = (short)13181;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17780800179353229833ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 9076386614472945624ULL;
int zero = 0;
long long int var_10 = -3675849665552917987LL;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
