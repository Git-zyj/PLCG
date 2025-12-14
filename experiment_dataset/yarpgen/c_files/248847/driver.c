#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14107;
short var_4 = (short)12169;
short var_6 = (short)-7231;
short var_7 = (short)-8759;
short var_8 = (short)1056;
short var_12 = (short)7286;
short var_13 = (short)-29590;
short var_15 = (short)10833;
int zero = 0;
short var_17 = (short)-12519;
short var_18 = (short)5668;
short var_19 = (short)25306;
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
