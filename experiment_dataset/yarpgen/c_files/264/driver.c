#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-14246;
short var_3 = (short)3719;
unsigned long long int var_15 = 6010395601774256961ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)24;
int var_19 = 41637321;
unsigned long long int var_20 = 5336990679737317327ULL;
void init() {
}

void checksum() {
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
