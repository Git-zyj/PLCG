#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17541;
unsigned int var_6 = 3757594456U;
short var_7 = (short)-6677;
signed char var_9 = (signed char)81;
unsigned int var_11 = 3709677109U;
int var_12 = 2137865407;
int zero = 0;
long long int var_15 = 3504611375305992482LL;
signed char var_16 = (signed char)-121;
void init() {
}

void checksum() {
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
