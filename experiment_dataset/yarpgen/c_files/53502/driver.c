#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)102;
short var_4 = (short)-9085;
int var_6 = -401963598;
signed char var_9 = (signed char)-87;
signed char var_11 = (signed char)31;
short var_14 = (short)-24199;
int var_16 = 1051831348;
int zero = 0;
short var_17 = (short)32103;
int var_18 = -448213022;
int var_19 = 1954628769;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
