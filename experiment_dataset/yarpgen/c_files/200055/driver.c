#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5380984414103067866LL;
short var_3 = (short)-12230;
unsigned long long int var_6 = 10364457551703220403ULL;
unsigned long long int var_7 = 16343891569766887454ULL;
unsigned int var_10 = 1749284550U;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 1235687277228586752ULL;
unsigned int var_17 = 3877684090U;
void init() {
}

void checksum() {
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
