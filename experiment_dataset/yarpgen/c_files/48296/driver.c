#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 795991219;
int var_6 = -1730999793;
short var_8 = (short)30200;
long long int var_9 = -7297950392515330263LL;
int var_10 = -1546310220;
int zero = 0;
short var_12 = (short)-24675;
int var_13 = 389743232;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
