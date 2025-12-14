#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-1018;
signed char var_7 = (signed char)85;
int var_8 = 1732340256;
int var_9 = 917786715;
long long int var_11 = -2230104895543370927LL;
int zero = 0;
signed char var_13 = (signed char)73;
short var_14 = (short)21032;
unsigned int var_15 = 3011607510U;
void init() {
}

void checksum() {
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
