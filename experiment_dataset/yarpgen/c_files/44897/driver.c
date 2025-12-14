#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2012232758;
short var_4 = (short)-17021;
short var_7 = (short)20501;
unsigned long long int var_8 = 8807787243448489562ULL;
int zero = 0;
unsigned long long int var_10 = 5365249000467078376ULL;
unsigned long long int var_11 = 4869571087829799111ULL;
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
