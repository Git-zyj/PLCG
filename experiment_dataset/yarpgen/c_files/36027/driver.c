#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -835180141;
unsigned int var_1 = 1236609128U;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)48433;
int zero = 0;
short var_11 = (short)-10764;
unsigned short var_12 = (unsigned short)29720;
int var_13 = -1012120818;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
