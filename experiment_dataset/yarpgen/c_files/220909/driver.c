#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2623578527U;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-37;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-28003;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)39;
int zero = 0;
long long int var_17 = -4974107634551684632LL;
unsigned short var_18 = (unsigned short)38213;
unsigned short var_19 = (unsigned short)37396;
void init() {
}

void checksum() {
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
