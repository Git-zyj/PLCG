#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6857430021064493578ULL;
signed char var_2 = (signed char)-88;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)34735;
signed char var_9 = (signed char)101;
unsigned int var_10 = 678036033U;
unsigned short var_11 = (unsigned short)42412;
int zero = 0;
short var_12 = (short)29490;
signed char var_13 = (signed char)-96;
unsigned short var_14 = (unsigned short)32441;
signed char var_15 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
