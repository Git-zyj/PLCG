#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
unsigned int var_2 = 271644547U;
int var_4 = 1934782831;
unsigned int var_5 = 2114558512U;
long long int var_7 = 636340929089034782LL;
unsigned int var_8 = 900027225U;
unsigned int var_9 = 3469841840U;
short var_11 = (short)-9002;
unsigned long long int var_12 = 15647058829933581536ULL;
int zero = 0;
unsigned int var_13 = 2464823125U;
unsigned char var_14 = (unsigned char)16;
unsigned long long int var_15 = 9403283194169906586ULL;
int var_16 = -218897090;
void init() {
}

void checksum() {
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
