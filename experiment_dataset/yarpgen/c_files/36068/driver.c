#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4552211545434693517LL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 11461278702205717957ULL;
short var_15 = (short)16652;
int zero = 0;
unsigned short var_20 = (unsigned short)24535;
long long int var_21 = 6591909588732481445LL;
void init() {
}

void checksum() {
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
