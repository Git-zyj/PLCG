#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21983;
short var_4 = (short)-29763;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 195305777U;
unsigned long long int var_10 = 8086773409759943600ULL;
unsigned int var_14 = 2113572807U;
int zero = 0;
signed char var_15 = (signed char)-15;
short var_16 = (short)-32392;
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
