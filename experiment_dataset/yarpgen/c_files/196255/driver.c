#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_6 = (short)-22493;
unsigned int var_11 = 3434288367U;
long long int var_13 = 8876164842102131690LL;
unsigned long long int var_16 = 2694168170021112407ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)30;
long long int var_18 = 7634371759658971992LL;
unsigned char var_19 = (unsigned char)253;
_Bool var_20 = (_Bool)0;
long long int var_21 = 7678147904835752860LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
