#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 5977659155086269484ULL;
short var_9 = (short)19079;
long long int var_10 = -176322907561493295LL;
short var_11 = (short)30123;
int zero = 0;
int var_12 = -1613204533;
long long int var_13 = -3780014789611825855LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-17;
void init() {
}

void checksum() {
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
