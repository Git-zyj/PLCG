#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_6 = (short)-2175;
long long int var_9 = 7400784074025139973LL;
int var_11 = 1590977026;
unsigned int var_12 = 1500623768U;
int zero = 0;
unsigned long long int var_14 = 10955869064696783498ULL;
int var_15 = 1414525197;
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
