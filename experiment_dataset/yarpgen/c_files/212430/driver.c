#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1024789367U;
unsigned short var_2 = (unsigned short)6422;
unsigned int var_5 = 681560917U;
long long int var_6 = -4626949959208908986LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2410337120069329834LL;
void init() {
}

void checksum() {
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
