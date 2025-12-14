#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)124;
unsigned int var_7 = 451432974U;
short var_13 = (short)-17681;
unsigned long long int var_18 = 15561879069923314465ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1689750897U;
_Bool var_22 = (_Bool)1;
long long int var_23 = -2418997706941487088LL;
unsigned short var_24 = (unsigned short)56624;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
