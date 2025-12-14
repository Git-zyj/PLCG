#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 914624364U;
short var_3 = (short)-21097;
signed char var_10 = (signed char)104;
unsigned int var_12 = 2765706839U;
long long int var_13 = 7575975996989779430LL;
int zero = 0;
short var_15 = (short)6974;
unsigned char var_16 = (unsigned char)89;
signed char var_17 = (signed char)-31;
_Bool var_18 = (_Bool)1;
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
