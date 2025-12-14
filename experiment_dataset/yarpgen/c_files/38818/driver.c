#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17467;
long long int var_6 = 7380287529694521389LL;
unsigned long long int var_7 = 13829962918818899900ULL;
unsigned long long int var_9 = 7362823071709396508ULL;
int zero = 0;
short var_12 = (short)-32269;
unsigned long long int var_13 = 2155041894734204986ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
