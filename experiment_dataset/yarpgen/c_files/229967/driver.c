#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27598;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)97;
unsigned long long int var_10 = 17643686894980726874ULL;
signed char var_11 = (signed char)95;
short var_12 = (short)-7363;
int zero = 0;
unsigned long long int var_13 = 8555489603341216503ULL;
unsigned long long int var_14 = 14574334477006799420ULL;
unsigned short var_15 = (unsigned short)39110;
signed char var_16 = (signed char)41;
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
