#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
short var_5 = (short)-4224;
unsigned int var_9 = 1077100731U;
signed char var_10 = (signed char)-81;
unsigned long long int var_12 = 14347279236227192882ULL;
int zero = 0;
unsigned int var_17 = 2272257482U;
unsigned char var_18 = (unsigned char)225;
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
