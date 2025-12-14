#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13275377004581909805ULL;
unsigned short var_5 = (unsigned short)38997;
short var_6 = (short)-18099;
unsigned long long int var_8 = 11452738600972730636ULL;
_Bool var_9 = (_Bool)0;
int var_16 = 1681454280;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)35889;
unsigned long long int var_19 = 7803208152980157709ULL;
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
