#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6719035598924582826LL;
unsigned long long int var_8 = 13307335773819550091ULL;
int var_11 = 1204112566;
unsigned int var_16 = 3796457116U;
signed char var_17 = (signed char)-61;
int zero = 0;
unsigned int var_20 = 2220335600U;
int var_21 = -1513294839;
long long int var_22 = -2629595510709209226LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
