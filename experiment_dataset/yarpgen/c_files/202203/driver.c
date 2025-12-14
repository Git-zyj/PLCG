#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7043;
int var_3 = -2015839866;
unsigned int var_6 = 2840501951U;
unsigned int var_15 = 3083543192U;
int zero = 0;
short var_19 = (short)10515;
unsigned long long int var_20 = 1526306569722998277ULL;
long long int var_21 = -2625741640327875912LL;
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
