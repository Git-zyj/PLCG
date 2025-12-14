#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10226;
short var_4 = (short)-29263;
short var_6 = (short)13686;
short var_11 = (short)9760;
short var_12 = (short)-24072;
short var_13 = (short)-15228;
int zero = 0;
short var_15 = (short)19929;
short var_16 = (short)8136;
short var_17 = (short)-21591;
short var_18 = (short)8153;
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
