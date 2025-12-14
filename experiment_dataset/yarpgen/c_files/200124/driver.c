#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4706844417975587985ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 13758272440352162411ULL;
long long int var_13 = -7612224787868952277LL;
signed char var_15 = (signed char)-111;
int zero = 0;
unsigned int var_19 = 1769141796U;
short var_20 = (short)21969;
unsigned int var_21 = 4174651077U;
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
