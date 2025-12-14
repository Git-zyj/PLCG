#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3442;
unsigned long long int var_4 = 3429175506730793096ULL;
_Bool var_8 = (_Bool)0;
short var_11 = (short)30594;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-117;
unsigned short var_17 = (unsigned short)79;
void init() {
}

void checksum() {
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
