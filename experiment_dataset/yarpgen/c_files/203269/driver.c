#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29086;
signed char var_2 = (signed char)120;
signed char var_5 = (signed char)35;
signed char var_6 = (signed char)-11;
unsigned long long int var_7 = 931969165273016982ULL;
unsigned long long int var_9 = 1642001968147774049ULL;
signed char var_11 = (signed char)-86;
short var_13 = (short)-7448;
int zero = 0;
signed char var_14 = (signed char)21;
signed char var_15 = (signed char)-92;
signed char var_16 = (signed char)70;
short var_17 = (short)-13739;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
