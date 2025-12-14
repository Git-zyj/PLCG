#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15946359759832468595ULL;
unsigned long long int var_3 = 11002814005405440913ULL;
unsigned long long int var_10 = 13895499683561343076ULL;
int zero = 0;
short var_15 = (short)-17590;
signed char var_16 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
