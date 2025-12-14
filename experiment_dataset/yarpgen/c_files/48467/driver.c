#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)1362;
unsigned int var_7 = 3446032204U;
short var_8 = (short)-12747;
int zero = 0;
unsigned long long int var_16 = 800503002189491725ULL;
short var_17 = (short)30723;
short var_18 = (short)-25374;
unsigned int var_19 = 2001763695U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
