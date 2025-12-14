#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)107;
long long int var_7 = 5412827936958515391LL;
signed char var_8 = (signed char)-54;
signed char var_12 = (signed char)120;
int var_16 = -702632760;
int zero = 0;
short var_17 = (short)-14733;
unsigned long long int var_18 = 10030282359210244617ULL;
unsigned int var_19 = 2486689727U;
signed char var_20 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
