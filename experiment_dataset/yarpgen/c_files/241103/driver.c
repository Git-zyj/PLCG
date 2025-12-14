#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29810;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6767544364109920791LL;
int var_12 = 637398482;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_19 = -2157281893896155164LL;
int var_20 = -1042766667;
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
