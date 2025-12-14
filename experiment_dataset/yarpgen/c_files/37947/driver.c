#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5148;
signed char var_4 = (signed char)-78;
short var_5 = (short)-22811;
short var_6 = (short)29324;
unsigned long long int var_13 = 12598289990691219494ULL;
unsigned long long int var_16 = 1034840192349053345ULL;
unsigned long long int var_17 = 13321386969056968302ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)104;
signed char var_19 = (signed char)116;
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
