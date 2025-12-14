#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_9 = -5842090740296830070LL;
long long int var_13 = 7708538080616505956LL;
unsigned int var_14 = 2548338348U;
int zero = 0;
long long int var_15 = 1300147743990267131LL;
unsigned int var_16 = 1656539764U;
unsigned int var_17 = 294541822U;
long long int var_18 = 93473543893903185LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
