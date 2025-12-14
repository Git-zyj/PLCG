#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -5390005136298741584LL;
unsigned short var_3 = (unsigned short)11757;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 3162164561248570858ULL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 2632693097178843203ULL;
int zero = 0;
int var_11 = 1727232219;
int var_12 = -2136461357;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2833332898U;
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
