#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9062008466839924723LL;
signed char var_2 = (signed char)88;
unsigned int var_3 = 978915844U;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1798178148U;
unsigned long long int var_9 = 4845927289643238135ULL;
unsigned long long int var_10 = 11986414193255979690ULL;
int zero = 0;
unsigned int var_11 = 3578397515U;
unsigned int var_12 = 1059797827U;
int var_13 = -1673378133;
unsigned long long int var_14 = 13175521913795973424ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
