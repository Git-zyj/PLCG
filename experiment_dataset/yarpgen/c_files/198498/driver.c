#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-70;
int zero = 0;
signed char var_10 = (signed char)-9;
long long int var_11 = -7292514946646916813LL;
unsigned short var_12 = (unsigned short)43285;
unsigned short var_13 = (unsigned short)54931;
long long int var_14 = -6613026104368243429LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
