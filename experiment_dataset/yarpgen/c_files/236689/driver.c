#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 336654563;
unsigned int var_2 = 3004836423U;
unsigned short var_3 = (unsigned short)40517;
short var_7 = (short)12305;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-99;
unsigned int var_12 = 497268096U;
unsigned long long int var_13 = 9288593478016405237ULL;
unsigned int var_14 = 145660002U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
