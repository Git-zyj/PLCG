#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 316971424U;
long long int var_2 = -8115082166965174459LL;
unsigned short var_8 = (unsigned short)43034;
unsigned short var_14 = (unsigned short)19659;
unsigned short var_16 = (unsigned short)62201;
unsigned short var_17 = (unsigned short)33918;
int zero = 0;
long long int var_18 = -9053849290669975033LL;
unsigned short var_19 = (unsigned short)48855;
unsigned int var_20 = 3456575570U;
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
