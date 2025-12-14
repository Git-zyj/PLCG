#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3238200481853585673ULL;
int var_5 = -591236441;
short var_6 = (short)-7510;
signed char var_8 = (signed char)-97;
short var_12 = (short)8211;
int zero = 0;
short var_20 = (short)-8952;
int var_21 = -1554111386;
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
