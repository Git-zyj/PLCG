#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3796583424U;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-81;
short var_12 = (short)11541;
int zero = 0;
unsigned char var_15 = (unsigned char)37;
short var_16 = (short)10214;
void init() {
}

void checksum() {
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
