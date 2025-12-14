#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)399;
signed char var_14 = (signed char)-82;
signed char var_16 = (signed char)77;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 2326335486248976343ULL;
short var_19 = (short)16166;
short var_20 = (short)-24723;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
