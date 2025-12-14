#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9958626020627790537ULL;
unsigned char var_4 = (unsigned char)134;
unsigned char var_12 = (unsigned char)231;
unsigned char var_14 = (unsigned char)66;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-13128;
void init() {
}

void checksum() {
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
