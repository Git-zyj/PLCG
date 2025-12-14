#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10805;
short var_3 = (short)-17478;
short var_4 = (short)-6615;
short var_14 = (short)-23264;
int zero = 0;
short var_15 = (short)14602;
short var_16 = (short)9414;
short var_17 = (short)-11233;
short var_18 = (short)-14224;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
