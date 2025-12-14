#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2395043241U;
signed char var_7 = (signed char)55;
long long int var_10 = -8811859903507336000LL;
long long int var_12 = 8033605317632131755LL;
unsigned short var_14 = (unsigned short)45025;
unsigned long long int var_15 = 11861919486373858490ULL;
signed char var_16 = (signed char)-30;
int zero = 0;
int var_18 = -816423120;
int var_19 = -2084339923;
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
