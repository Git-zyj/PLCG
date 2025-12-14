#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
unsigned int var_3 = 1090217021U;
unsigned long long int var_5 = 15302720679818068151ULL;
int var_7 = 872580320;
long long int var_8 = -234589188538647551LL;
unsigned char var_10 = (unsigned char)136;
unsigned long long int var_11 = 4614875321463328752ULL;
int var_12 = 448792121;
unsigned long long int var_14 = 11513693845929431849ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)130;
unsigned char var_17 = (unsigned char)56;
unsigned int var_18 = 1045897330U;
int var_19 = -581052257;
unsigned int var_20 = 2953335091U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
