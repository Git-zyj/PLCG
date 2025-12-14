#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)53017;
int var_7 = 1604766184;
int var_9 = 427370341;
signed char var_11 = (signed char)(-127 - 1);
signed char var_12 = (signed char)-33;
int zero = 0;
unsigned int var_13 = 3390488593U;
signed char var_14 = (signed char)-114;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-5915;
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
