#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25939;
short var_1 = (short)15636;
short var_2 = (short)-17647;
short var_3 = (short)-7181;
short var_5 = (short)-1192;
short var_6 = (short)-18748;
short var_7 = (short)-18913;
short var_10 = (short)-22550;
short var_11 = (short)4713;
short var_12 = (short)-3146;
short var_14 = (short)-17970;
int zero = 0;
short var_15 = (short)25006;
short var_16 = (short)-10691;
short var_17 = (short)-3701;
void init() {
}

void checksum() {
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
