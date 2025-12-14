#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1024979240U;
unsigned long long int var_7 = 12661748311240502780ULL;
short var_10 = (short)-11133;
long long int var_14 = -1572655102658312384LL;
long long int var_16 = -7150955194472703254LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2571191012968192749ULL;
short var_21 = (short)12043;
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
