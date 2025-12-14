#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 522947159;
long long int var_5 = -6677350815479684132LL;
int var_6 = -1772003638;
int zero = 0;
int var_17 = -1877238420;
int var_18 = 1232785428;
int var_19 = 1624163990;
long long int var_20 = 3157483424860161879LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
