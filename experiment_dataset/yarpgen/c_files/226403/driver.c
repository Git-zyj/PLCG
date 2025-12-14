#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)38;
unsigned int var_5 = 2305950324U;
signed char var_10 = (signed char)-124;
int var_16 = 1629790528;
int zero = 0;
short var_20 = (short)-22780;
short var_21 = (short)7192;
void init() {
}

void checksum() {
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
