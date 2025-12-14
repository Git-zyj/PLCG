#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4311210782002175130LL;
_Bool var_2 = (_Bool)1;
short var_8 = (short)-28573;
short var_10 = (short)14008;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 7471985346385882608LL;
int var_13 = 1046053021;
long long int var_14 = 1585039912032076695LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
