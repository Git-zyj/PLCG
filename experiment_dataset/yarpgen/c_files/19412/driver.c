#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-99;
short var_7 = (short)19653;
short var_15 = (short)18686;
unsigned int var_16 = 9592478U;
int var_17 = 1627679393;
int zero = 0;
unsigned short var_18 = (unsigned short)65309;
unsigned long long int var_19 = 15048367632083820909ULL;
unsigned int var_20 = 2161257196U;
unsigned char var_21 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
