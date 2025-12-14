#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7630;
short var_6 = (short)-3572;
short var_8 = (short)4011;
short var_13 = (short)2649;
short var_16 = (short)24588;
int zero = 0;
short var_17 = (short)-18054;
short var_18 = (short)-23282;
void init() {
}

void checksum() {
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
