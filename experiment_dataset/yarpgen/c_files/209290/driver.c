#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6959;
unsigned long long int var_3 = 5289670613405192765ULL;
unsigned short var_6 = (unsigned short)42792;
int zero = 0;
short var_10 = (short)20374;
unsigned long long int var_11 = 15610019765342054653ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
