#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1150;
short var_6 = (short)-26050;
short var_7 = (short)23483;
short var_8 = (short)-8473;
short var_9 = (short)-17629;
short var_10 = (short)25393;
short var_11 = (short)24393;
short var_12 = (short)-13701;
short var_13 = (short)31953;
int zero = 0;
short var_14 = (short)8774;
short var_15 = (short)-6619;
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
