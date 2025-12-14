#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -1119556589;
short var_4 = (short)24173;
unsigned long long int var_6 = 15786474524142994953ULL;
unsigned int var_7 = 2567111790U;
int zero = 0;
signed char var_11 = (signed char)-40;
int var_12 = -2013628107;
unsigned char var_13 = (unsigned char)69;
unsigned long long int var_14 = 14098262679045954650ULL;
short var_15 = (short)-11827;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
