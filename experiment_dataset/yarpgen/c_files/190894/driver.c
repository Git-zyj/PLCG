#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)149;
unsigned int var_9 = 427385877U;
unsigned long long int var_10 = 3681726182938131549ULL;
signed char var_14 = (signed char)39;
signed char var_15 = (signed char)42;
unsigned int var_18 = 250941854U;
int zero = 0;
int var_19 = 1641771896;
int var_20 = -1931281805;
short var_21 = (short)-8667;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
