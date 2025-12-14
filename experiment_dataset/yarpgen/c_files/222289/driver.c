#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 533873852797877656ULL;
short var_2 = (short)21538;
long long int var_5 = -2289311412143642050LL;
unsigned long long int var_13 = 489699214242237099ULL;
unsigned short var_16 = (unsigned short)48687;
signed char var_17 = (signed char)-31;
int zero = 0;
unsigned short var_18 = (unsigned short)1549;
int var_19 = -2004525671;
short var_20 = (short)16621;
signed char var_21 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
