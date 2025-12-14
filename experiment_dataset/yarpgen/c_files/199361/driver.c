#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12108;
unsigned long long int var_1 = 1000559707833709539ULL;
unsigned long long int var_2 = 9885487440919438683ULL;
short var_9 = (short)-10962;
short var_11 = (short)10020;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 12734853643463818682ULL;
unsigned long long int var_14 = 15677669809342713229ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
