#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19865;
long long int var_3 = -5161327648355134263LL;
unsigned int var_7 = 1950001854U;
unsigned long long int var_8 = 6227651784115197016ULL;
long long int var_10 = 4657841788175802893LL;
short var_14 = (short)-21884;
_Bool var_15 = (_Bool)0;
long long int var_17 = -6207845696270768271LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
long long int var_20 = -728364582895262249LL;
unsigned short var_21 = (unsigned short)32832;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
