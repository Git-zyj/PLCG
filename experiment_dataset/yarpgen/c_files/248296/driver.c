#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7730;
unsigned long long int var_1 = 6272315099803757017ULL;
unsigned int var_2 = 3055162142U;
unsigned long long int var_5 = 11453337006652603962ULL;
short var_8 = (short)-5298;
unsigned int var_12 = 2534166853U;
unsigned int var_14 = 2209357760U;
long long int var_16 = 1810891779528761046LL;
int zero = 0;
int var_18 = 209370033;
unsigned long long int var_19 = 7055981551114156937ULL;
long long int var_20 = 6118178620931637973LL;
void init() {
}

void checksum() {
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
