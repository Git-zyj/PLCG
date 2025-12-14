#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2174369343U;
int var_7 = 470834831;
short var_10 = (short)13149;
unsigned short var_11 = (unsigned short)43427;
long long int var_14 = 6331101395966719487LL;
int zero = 0;
short var_15 = (short)-24510;
unsigned int var_16 = 762227913U;
unsigned long long int var_17 = 12930150982055312651ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
