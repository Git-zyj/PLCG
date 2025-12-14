#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2555;
_Bool var_1 = (_Bool)0;
short var_4 = (short)13245;
signed char var_5 = (signed char)98;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)3065;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1810589057U;
unsigned int var_13 = 1752585853U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
