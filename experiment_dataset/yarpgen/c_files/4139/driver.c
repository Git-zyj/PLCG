#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)19992;
unsigned char var_4 = (unsigned char)30;
short var_5 = (short)24103;
int var_6 = 1781826428;
unsigned char var_7 = (unsigned char)84;
int var_10 = -936363560;
unsigned int var_11 = 2835745351U;
int zero = 0;
long long int var_15 = -5091910187814860706LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8873557158209993170LL;
short var_18 = (short)-26885;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
