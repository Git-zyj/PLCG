#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 144892075U;
unsigned long long int var_1 = 6054696921181142290ULL;
unsigned int var_2 = 4038180813U;
unsigned int var_3 = 809964069U;
unsigned int var_4 = 2423390560U;
unsigned int var_5 = 1940580481U;
unsigned int var_12 = 4046363528U;
unsigned long long int var_13 = 8756759796544933557ULL;
short var_14 = (short)28852;
signed char var_15 = (signed char)-23;
unsigned long long int var_16 = 13251739052248781032ULL;
signed char var_18 = (signed char)122;
int zero = 0;
unsigned long long int var_19 = 13466702920264576688ULL;
signed char var_20 = (signed char)112;
unsigned int var_21 = 894156188U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
