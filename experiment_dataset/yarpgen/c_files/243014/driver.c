#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23147;
short var_1 = (short)12197;
short var_4 = (short)5336;
short var_5 = (short)-6264;
short var_6 = (short)-3347;
short var_7 = (short)31769;
short var_9 = (short)-31147;
short var_10 = (short)17770;
short var_13 = (short)-9999;
int zero = 0;
short var_16 = (short)-11483;
short var_17 = (short)-13358;
short var_18 = (short)32357;
short var_19 = (short)-25561;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
