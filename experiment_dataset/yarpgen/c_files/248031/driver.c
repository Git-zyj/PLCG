#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)33;
signed char var_6 = (signed char)2;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)6373;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = 1096530853;
unsigned long long int var_19 = 821996710077761403ULL;
long long int var_20 = -5316847963985730334LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
