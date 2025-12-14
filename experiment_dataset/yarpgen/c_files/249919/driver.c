#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2599922540765918075ULL;
unsigned short var_13 = (unsigned short)12464;
int zero = 0;
short var_15 = (short)-5893;
int var_16 = -1573045008;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
