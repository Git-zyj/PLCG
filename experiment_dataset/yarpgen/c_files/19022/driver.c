#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21348;
signed char var_3 = (signed char)-35;
unsigned int var_4 = 3803395840U;
unsigned short var_10 = (unsigned short)25811;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)13676;
short var_16 = (short)18049;
int zero = 0;
unsigned long long int var_18 = 11031116716115034624ULL;
short var_19 = (short)-31178;
unsigned long long int var_20 = 11222158902703132549ULL;
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
