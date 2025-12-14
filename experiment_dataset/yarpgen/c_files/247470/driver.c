#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)10737;
short var_11 = (short)-28373;
unsigned char var_12 = (unsigned char)160;
short var_14 = (short)1943;
unsigned char var_16 = (unsigned char)150;
int zero = 0;
unsigned long long int var_17 = 17542335217938336610ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
