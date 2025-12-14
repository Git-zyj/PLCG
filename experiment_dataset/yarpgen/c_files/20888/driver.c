#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)627;
unsigned short var_2 = (unsigned short)47918;
signed char var_7 = (signed char)94;
signed char var_9 = (signed char)62;
unsigned long long int var_13 = 6700045293711183038ULL;
int zero = 0;
signed char var_14 = (signed char)-19;
short var_15 = (short)-15355;
unsigned int var_16 = 424531165U;
unsigned int var_17 = 2322465005U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
