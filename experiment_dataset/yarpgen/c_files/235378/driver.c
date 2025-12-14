#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 981704946;
short var_3 = (short)-14621;
int var_5 = 1493311572;
int var_7 = 932760665;
short var_13 = (short)-6633;
int zero = 0;
short var_14 = (short)30229;
int var_15 = -1957645192;
short var_16 = (short)19495;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
