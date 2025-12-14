#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26601;
short var_6 = (short)8661;
unsigned long long int var_7 = 15568941169005189719ULL;
short var_10 = (short)-15668;
signed char var_12 = (signed char)-71;
int zero = 0;
unsigned int var_18 = 1312777618U;
long long int var_19 = 1100821401491046178LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
