#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
short var_6 = (short)10127;
long long int var_8 = -5817712146572252633LL;
int var_14 = -2118116556;
long long int var_16 = 8732352225031313221LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8170008887848721320LL;
unsigned char var_20 = (unsigned char)249;
short var_21 = (short)-7306;
int var_22 = -180851434;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
