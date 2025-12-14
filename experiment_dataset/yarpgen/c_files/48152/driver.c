#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6654830665892543864LL;
int var_7 = 236714979;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_12 = 1076209644;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_19 = -1196025264;
int var_20 = 1800063610;
int var_21 = 1955532237;
long long int var_22 = -354807804622229289LL;
int var_23 = -2074147201;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
