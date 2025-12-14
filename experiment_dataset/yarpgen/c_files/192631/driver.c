#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -941254861;
short var_6 = (short)10263;
int var_7 = -1466134998;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 352123318U;
long long int var_11 = -9083256832961100175LL;
long long int var_14 = -3396895134315280046LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -5492188447790883721LL;
long long int var_21 = 4345852164817034236LL;
int var_22 = -639591321;
void init() {
}

void checksum() {
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
