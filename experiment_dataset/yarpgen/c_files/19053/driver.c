#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -813177522;
long long int var_6 = 8846694162994565354LL;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 1778152545U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 3244964577530647447ULL;
long long int var_18 = 5579725057022503006LL;
short var_19 = (short)-5849;
int var_20 = 245100783;
int var_21 = 2037429789;
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
