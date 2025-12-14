#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 2777609806741443542ULL;
unsigned long long int var_10 = 10933833089316857265ULL;
unsigned char var_12 = (unsigned char)218;
int zero = 0;
unsigned short var_15 = (unsigned short)32712;
short var_16 = (short)15683;
unsigned short var_17 = (unsigned short)3023;
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
