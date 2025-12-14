#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1073522427;
_Bool var_2 = (_Bool)1;
long long int var_10 = -3487193781975535921LL;
short var_13 = (short)-26395;
signed char var_14 = (signed char)114;
long long int var_16 = -1077986577577002121LL;
int zero = 0;
long long int var_19 = 7759786283782439595LL;
long long int var_20 = 7508262708424843232LL;
void init() {
}

void checksum() {
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
