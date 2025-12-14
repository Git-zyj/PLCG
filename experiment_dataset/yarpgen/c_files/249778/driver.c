#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5751;
long long int var_3 = 2763572575659992034LL;
short var_4 = (short)-28373;
unsigned int var_6 = 2858612560U;
short var_7 = (short)31870;
unsigned long long int var_8 = 15346710148739346871ULL;
unsigned long long int var_10 = 8035623567109847202ULL;
int zero = 0;
short var_11 = (short)1979;
unsigned int var_12 = 1929620672U;
unsigned int var_13 = 3793311152U;
long long int var_14 = -8371341489486711290LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
