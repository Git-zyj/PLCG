#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 876113198;
short var_6 = (short)-30608;
int var_7 = -1752170905;
unsigned short var_8 = (unsigned short)33091;
int zero = 0;
unsigned short var_10 = (unsigned short)48013;
long long int var_11 = -6124454036366018367LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
