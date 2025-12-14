#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-18106;
short var_9 = (short)8346;
short var_10 = (short)10949;
short var_11 = (short)-15209;
short var_15 = (short)-9405;
short var_19 = (short)-22540;
int zero = 0;
short var_20 = (short)-13160;
short var_21 = (short)-23258;
short var_22 = (short)23227;
short var_23 = (short)31448;
short var_24 = (short)-11000;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
