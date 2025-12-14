#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1656893647U;
unsigned long long int var_6 = 17608603462347233829ULL;
unsigned int var_7 = 706143262U;
long long int var_8 = 5393620268964040644LL;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)48993;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)34;
unsigned long long int var_16 = 8784511652541455874ULL;
void init() {
}

void checksum() {
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
