#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3528794474U;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_14 = (short)12532;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_20 = 1780223409;
long long int var_21 = 2762058416337849163LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
