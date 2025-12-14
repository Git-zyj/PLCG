#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3253649929U;
unsigned long long int var_1 = 12797441515974697436ULL;
int var_2 = -515550738;
short var_3 = (short)-22581;
short var_11 = (short)-15235;
long long int var_12 = 7727822554314829877LL;
int zero = 0;
signed char var_13 = (signed char)-42;
short var_14 = (short)16330;
_Bool var_15 = (_Bool)0;
int var_16 = -631741064;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
