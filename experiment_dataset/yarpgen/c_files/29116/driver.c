#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23422;
long long int var_8 = -8991426093556910567LL;
int var_9 = -1137609420;
long long int var_12 = 3594646603557637013LL;
unsigned int var_17 = 3417160041U;
int var_18 = 468192649;
int zero = 0;
long long int var_20 = -8044848290208925728LL;
short var_21 = (short)5283;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
