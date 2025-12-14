#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29062;
signed char var_8 = (signed char)65;
unsigned short var_10 = (unsigned short)21830;
signed char var_11 = (signed char)-104;
int zero = 0;
unsigned short var_13 = (unsigned short)25585;
unsigned int var_14 = 1029833374U;
short var_15 = (short)-22674;
signed char var_16 = (signed char)-73;
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
