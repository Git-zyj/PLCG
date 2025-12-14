#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)43;
unsigned short var_6 = (unsigned short)14902;
signed char var_12 = (signed char)-69;
unsigned short var_14 = (unsigned short)24033;
int zero = 0;
short var_20 = (short)-23113;
signed char var_21 = (signed char)-70;
void init() {
}

void checksum() {
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
