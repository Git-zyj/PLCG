#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)100;
long long int var_5 = 2702384030263309992LL;
unsigned long long int var_6 = 781237175170187266ULL;
short var_9 = (short)17847;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_15 = 1294771475474250102LL;
long long int var_16 = 801869191826135432LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)5943;
unsigned int var_22 = 3482189237U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
