#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)61;
short var_4 = (short)7850;
int var_5 = -1678715669;
unsigned short var_6 = (unsigned short)29862;
unsigned char var_9 = (unsigned char)100;
long long int var_11 = -870827103091466783LL;
signed char var_12 = (signed char)73;
int zero = 0;
signed char var_13 = (signed char)33;
short var_14 = (short)-22971;
signed char var_15 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
