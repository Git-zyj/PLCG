#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9999477932962356353ULL;
unsigned long long int var_1 = 18271526853719617075ULL;
unsigned char var_7 = (unsigned char)125;
unsigned long long int var_10 = 12986472076597396230ULL;
unsigned short var_13 = (unsigned short)19271;
int zero = 0;
short var_14 = (short)32338;
unsigned long long int var_15 = 10918823249050040178ULL;
void init() {
}

void checksum() {
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
