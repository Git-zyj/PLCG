#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1972;
signed char var_2 = (signed char)-19;
signed char var_4 = (signed char)-90;
short var_7 = (short)2737;
short var_10 = (short)18554;
signed char var_11 = (signed char)-102;
short var_12 = (short)31875;
short var_13 = (short)-1399;
int zero = 0;
short var_15 = (short)23365;
short var_16 = (short)-1431;
short var_17 = (short)-19329;
short var_18 = (short)32538;
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
