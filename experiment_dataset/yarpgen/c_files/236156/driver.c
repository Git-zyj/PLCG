#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_5 = -251967843;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3384110788948532368LL;
int zero = 0;
unsigned long long int var_13 = 1345529743635317189ULL;
short var_14 = (short)-26957;
unsigned int var_15 = 1280629709U;
void init() {
}

void checksum() {
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
