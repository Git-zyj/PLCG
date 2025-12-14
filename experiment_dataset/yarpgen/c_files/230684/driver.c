#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1928818930592557924LL;
unsigned short var_6 = (unsigned short)3626;
short var_8 = (short)-31545;
signed char var_11 = (signed char)-101;
unsigned int var_18 = 3784407094U;
int zero = 0;
long long int var_19 = 7335796083744346943LL;
int var_20 = -907197320;
void init() {
}

void checksum() {
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
