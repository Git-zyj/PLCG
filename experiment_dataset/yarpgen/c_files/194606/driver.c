#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16226494171823680946ULL;
unsigned short var_6 = (unsigned short)45730;
signed char var_8 = (signed char)-7;
unsigned long long int var_14 = 1168917030176598080ULL;
long long int var_18 = -2245399445434498823LL;
int zero = 0;
short var_19 = (short)-17662;
long long int var_20 = 4516766884033497137LL;
long long int var_21 = -7340417032864166090LL;
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
