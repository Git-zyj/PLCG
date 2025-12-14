#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -826326151909311912LL;
unsigned char var_3 = (unsigned char)110;
unsigned char var_4 = (unsigned char)43;
unsigned int var_5 = 2816035103U;
short var_6 = (short)2096;
short var_7 = (short)-23665;
signed char var_8 = (signed char)-82;
int zero = 0;
unsigned char var_10 = (unsigned char)99;
long long int var_11 = 8939514084472719131LL;
long long int var_12 = 8145232171818578337LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
