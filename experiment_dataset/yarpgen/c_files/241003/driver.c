#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)10034;
short var_10 = (short)31323;
unsigned long long int var_11 = 11440612833154086782ULL;
long long int var_14 = -6636214918668823022LL;
int zero = 0;
short var_18 = (short)-19617;
short var_19 = (short)28588;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
