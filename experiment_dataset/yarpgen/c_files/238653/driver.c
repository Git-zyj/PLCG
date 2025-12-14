#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18037;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 128747096U;
unsigned long long int var_8 = 7657172072320418219ULL;
unsigned short var_9 = (unsigned short)60097;
int zero = 0;
signed char var_10 = (signed char)-66;
long long int var_11 = -5848101420778007558LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
