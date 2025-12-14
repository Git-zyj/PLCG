#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2378052630737665320LL;
unsigned long long int var_1 = 10244534932652912918ULL;
long long int var_3 = 700067843771584164LL;
long long int var_6 = -7874195586290638847LL;
unsigned long long int var_11 = 11528670313724860918ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 735832468U;
unsigned int var_18 = 261376390U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
