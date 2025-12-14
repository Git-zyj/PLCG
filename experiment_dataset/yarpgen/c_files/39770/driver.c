#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4611884273538883850LL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 718068760U;
int zero = 0;
unsigned int var_16 = 1594457438U;
short var_17 = (short)-28173;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
