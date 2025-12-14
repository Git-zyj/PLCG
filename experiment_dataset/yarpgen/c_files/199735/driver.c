#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3793408827U;
signed char var_6 = (signed char)48;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-33;
unsigned long long int var_12 = 6786358975761782798ULL;
unsigned long long int var_14 = 3514571596452963763ULL;
unsigned long long int var_15 = 16415278764196877998ULL;
int zero = 0;
unsigned long long int var_19 = 12423962929491315264ULL;
unsigned long long int var_20 = 10692093800288191075ULL;
unsigned int var_21 = 1580470144U;
void init() {
}

void checksum() {
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
