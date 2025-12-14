#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24507;
short var_4 = (short)3073;
unsigned int var_5 = 1459566519U;
unsigned int var_7 = 922290784U;
unsigned long long int var_8 = 17744095207321607129ULL;
short var_9 = (short)-12490;
int zero = 0;
unsigned long long int var_10 = 13201088591566148026ULL;
short var_11 = (short)15497;
unsigned int var_12 = 2374849625U;
int var_13 = -1079754478;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
