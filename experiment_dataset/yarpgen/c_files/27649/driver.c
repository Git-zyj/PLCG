#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18058135972391524612ULL;
int var_4 = 367809336;
signed char var_5 = (signed char)29;
unsigned long long int var_6 = 7154372160470353503ULL;
_Bool var_7 = (_Bool)0;
long long int var_15 = -6872329860896458570LL;
int zero = 0;
long long int var_18 = 7222124370971978255LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 826232964U;
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
