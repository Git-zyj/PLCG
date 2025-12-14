#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5881;
short var_5 = (short)-10644;
short var_8 = (short)-23534;
short var_10 = (short)8500;
int zero = 0;
short var_11 = (short)330;
short var_12 = (short)1469;
long long int var_13 = 7964946716219918817LL;
short var_14 = (short)-2896;
long long int var_15 = 7954558480424216074LL;
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
