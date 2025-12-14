#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1887493881U;
unsigned int var_1 = 2692432598U;
unsigned int var_4 = 523082180U;
unsigned int var_5 = 2930805455U;
unsigned int var_6 = 3993073423U;
unsigned int var_7 = 1324031452U;
unsigned int var_8 = 1458554855U;
int zero = 0;
unsigned int var_11 = 2265080982U;
unsigned int var_12 = 840737541U;
unsigned int var_13 = 1253479627U;
unsigned int var_14 = 3080791513U;
void init() {
}

void checksum() {
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
