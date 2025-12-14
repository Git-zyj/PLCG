#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23627;
unsigned char var_3 = (unsigned char)215;
unsigned long long int var_7 = 5806966349268688750ULL;
int var_8 = -1809491434;
short var_10 = (short)-6627;
int zero = 0;
unsigned int var_11 = 3619274323U;
unsigned int var_12 = 61696155U;
unsigned long long int var_13 = 6332915048377347283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
