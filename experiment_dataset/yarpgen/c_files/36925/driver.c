#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1569851960;
short var_1 = (short)24690;
int var_2 = -187639523;
short var_5 = (short)-4144;
signed char var_6 = (signed char)120;
unsigned long long int var_10 = 1599992368948670753ULL;
signed char var_11 = (signed char)20;
int zero = 0;
signed char var_13 = (signed char)63;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
