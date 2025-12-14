#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)41108;
signed char var_10 = (signed char)-95;
unsigned short var_15 = (unsigned short)19123;
int zero = 0;
short var_16 = (short)-20829;
signed char var_17 = (signed char)122;
signed char var_18 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
