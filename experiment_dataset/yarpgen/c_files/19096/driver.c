#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1292176361U;
int var_5 = -68918094;
unsigned long long int var_7 = 11370501836326343805ULL;
unsigned int var_8 = 2354479584U;
short var_11 = (short)4471;
int var_16 = 1608605923;
int zero = 0;
short var_18 = (short)-1021;
long long int var_19 = 750082275872239573LL;
short var_20 = (short)-32069;
short var_21 = (short)10155;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
