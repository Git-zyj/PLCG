#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 11679021542918474117ULL;
unsigned int var_17 = 2258582371U;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
short var_19 = (short)-17389;
short var_20 = (short)-15115;
unsigned char var_21 = (unsigned char)153;
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
