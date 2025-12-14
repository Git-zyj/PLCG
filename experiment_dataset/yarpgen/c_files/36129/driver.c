#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 16673494639685057928ULL;
unsigned char var_7 = (unsigned char)140;
unsigned int var_10 = 3750979923U;
int zero = 0;
signed char var_11 = (signed char)-122;
int var_12 = 160122324;
long long int var_13 = 3023543430333019016LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
