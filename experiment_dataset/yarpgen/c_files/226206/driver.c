#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38496;
short var_7 = (short)8177;
unsigned long long int var_8 = 16131487129085431265ULL;
unsigned char var_10 = (unsigned char)30;
int zero = 0;
unsigned long long int var_13 = 12676991954492177855ULL;
long long int var_14 = -7144694203372008066LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
