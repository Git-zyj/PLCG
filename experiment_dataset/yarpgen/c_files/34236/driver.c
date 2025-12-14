#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -3305186017367359650LL;
int var_11 = -491219255;
signed char var_12 = (signed char)124;
signed char var_13 = (signed char)60;
int zero = 0;
short var_18 = (short)19462;
unsigned short var_19 = (unsigned short)10657;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
