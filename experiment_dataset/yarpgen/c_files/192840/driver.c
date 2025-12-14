#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5805741221254488129ULL;
unsigned long long int var_2 = 12979328243799405362ULL;
int var_4 = -1673416323;
short var_5 = (short)30727;
unsigned char var_8 = (unsigned char)191;
unsigned char var_10 = (unsigned char)33;
int zero = 0;
signed char var_13 = (signed char)77;
unsigned int var_14 = 1464477654U;
void init() {
}

void checksum() {
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
