#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)25489;
unsigned char var_7 = (unsigned char)134;
unsigned long long int var_8 = 2396701007078482951ULL;
unsigned char var_9 = (unsigned char)243;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-27912;
unsigned int var_13 = 2676619693U;
signed char var_14 = (signed char)13;
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
