#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_8 = 1308100016;
signed char var_11 = (signed char)-60;
signed char var_12 = (signed char)-50;
int zero = 0;
signed char var_14 = (signed char)24;
unsigned char var_15 = (unsigned char)200;
void init() {
}

void checksum() {
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
