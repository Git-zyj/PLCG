#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9087759990254826983ULL;
signed char var_1 = (signed char)13;
int var_3 = 1007737597;
short var_4 = (short)24577;
int var_5 = 1980050960;
short var_6 = (short)-7685;
short var_9 = (short)-20983;
unsigned int var_10 = 1165393273U;
short var_13 = (short)-13380;
int zero = 0;
short var_14 = (short)12992;
int var_15 = -455636497;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-4;
short var_18 = (short)-26526;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
