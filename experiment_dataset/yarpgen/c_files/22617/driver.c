#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7275;
short var_1 = (short)-28255;
short var_3 = (short)28164;
short var_4 = (short)-16446;
short var_11 = (short)-776;
int zero = 0;
short var_15 = (short)8492;
short var_16 = (short)9192;
short var_17 = (short)6520;
short var_18 = (short)-13;
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
