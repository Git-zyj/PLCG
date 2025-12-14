#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned int var_1 = 1449354416U;
short var_6 = (short)-17571;
long long int var_7 = 371355351132083503LL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 4276572968U;
unsigned short var_17 = (unsigned short)27424;
int zero = 0;
signed char var_20 = (signed char)-89;
unsigned int var_21 = 1011009566U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
