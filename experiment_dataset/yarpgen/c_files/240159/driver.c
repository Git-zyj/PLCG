#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_4 = (short)23856;
unsigned int var_5 = 1336033055U;
signed char var_7 = (signed char)-17;
unsigned int var_10 = 2747543396U;
int zero = 0;
int var_11 = 609812002;
int var_12 = -1572848811;
int var_13 = 1502788503;
void init() {
}

void checksum() {
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
