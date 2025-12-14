#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2667981988542200235LL;
long long int var_9 = -7976280081800141842LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 8276997649737108201ULL;
unsigned int var_14 = 462640568U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
