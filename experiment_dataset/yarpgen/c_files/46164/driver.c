#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5263175891282792490LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 5153060134281260735ULL;
long long int var_4 = -2215619609539496213LL;
unsigned int var_7 = 572916181U;
int zero = 0;
int var_10 = -2114847321;
unsigned long long int var_11 = 15216657083220619370ULL;
short var_12 = (short)-28586;
unsigned short var_13 = (unsigned short)47368;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
