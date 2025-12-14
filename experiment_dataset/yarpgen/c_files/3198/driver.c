#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37713;
short var_8 = (short)1798;
long long int var_10 = -8129260900129196079LL;
long long int var_11 = -2022130529353546423LL;
int zero = 0;
unsigned int var_12 = 3912812001U;
short var_13 = (short)-13920;
unsigned long long int var_14 = 12770920947561314549ULL;
long long int var_15 = 5350179038436764307LL;
unsigned int var_16 = 1044603571U;
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
