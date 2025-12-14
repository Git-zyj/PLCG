#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_6 = 5623131116606318635LL;
long long int var_9 = 4607356718165808956LL;
signed char var_10 = (signed char)8;
_Bool var_13 = (_Bool)0;
int var_18 = -398724969;
int zero = 0;
long long int var_19 = 1368587095572883910LL;
unsigned short var_20 = (unsigned short)55931;
long long int var_21 = 3208647646707633026LL;
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
