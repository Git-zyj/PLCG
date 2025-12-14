#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2835956673U;
unsigned long long int var_5 = 5110570168275115005ULL;
unsigned int var_6 = 1116466406U;
_Bool var_7 = (_Bool)1;
short var_11 = (short)13897;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3014604105U;
void init() {
}

void checksum() {
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
