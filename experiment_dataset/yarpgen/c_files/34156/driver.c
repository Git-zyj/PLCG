#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7246409387277488096LL;
_Bool var_3 = (_Bool)1;
int var_4 = 1498784213;
int var_12 = -1246782559;
int zero = 0;
unsigned char var_13 = (unsigned char)12;
unsigned long long int var_14 = 11731201529176930585ULL;
unsigned int var_15 = 2061642085U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
