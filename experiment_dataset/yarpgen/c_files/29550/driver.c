#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)226;
int var_5 = -1383896484;
unsigned int var_6 = 2902656060U;
signed char var_7 = (signed char)-115;
long long int var_12 = -2246444229542327498LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)8298;
unsigned long long int var_15 = 2024415555722765929ULL;
int var_16 = -1187292163;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
