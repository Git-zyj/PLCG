#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10824;
unsigned short var_6 = (unsigned short)41875;
unsigned char var_7 = (unsigned char)131;
short var_9 = (short)2839;
int zero = 0;
unsigned char var_12 = (unsigned char)233;
unsigned short var_13 = (unsigned short)25355;
int var_14 = 1974540579;
unsigned long long int var_15 = 423762486986980602ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
