#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50848;
_Bool var_3 = (_Bool)1;
signed char var_10 = (signed char)83;
int zero = 0;
short var_15 = (short)-11651;
signed char var_16 = (signed char)-108;
unsigned int var_17 = 2018438373U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
