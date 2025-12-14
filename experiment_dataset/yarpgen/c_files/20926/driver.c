#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2853;
short var_3 = (short)25611;
short var_4 = (short)-13040;
short var_5 = (short)27005;
short var_8 = (short)25477;
int zero = 0;
short var_11 = (short)3761;
short var_12 = (short)-21547;
short var_13 = (short)-26177;
short var_14 = (short)-17789;
short var_15 = (short)18873;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
