#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)24617;
int var_6 = -1504821282;
long long int var_8 = -7234224188659648863LL;
int var_9 = 676843356;
unsigned long long int var_10 = 13628115841065670155ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4161100488U;
long long int var_13 = -2526466275873642960LL;
short var_14 = (short)24292;
unsigned int var_15 = 2933218590U;
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
