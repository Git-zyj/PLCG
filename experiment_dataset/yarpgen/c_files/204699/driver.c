#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-2052;
unsigned char var_8 = (unsigned char)77;
long long int var_10 = -9201336774024557932LL;
int var_11 = -1867859314;
short var_12 = (short)-31302;
unsigned char var_15 = (unsigned char)163;
int zero = 0;
unsigned char var_17 = (unsigned char)197;
short var_18 = (short)-4780;
unsigned int var_19 = 854109186U;
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
