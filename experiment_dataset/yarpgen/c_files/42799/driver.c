#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-88;
unsigned char var_6 = (unsigned char)15;
int var_7 = 1001898385;
signed char var_8 = (signed char)-67;
short var_11 = (short)23107;
int zero = 0;
signed char var_12 = (signed char)-122;
unsigned int var_13 = 189919526U;
short var_14 = (short)-24722;
void init() {
}

void checksum() {
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
