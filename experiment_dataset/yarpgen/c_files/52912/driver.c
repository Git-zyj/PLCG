#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6880196556774059888LL;
signed char var_4 = (signed char)43;
unsigned short var_5 = (unsigned short)25831;
signed char var_8 = (signed char)35;
signed char var_10 = (signed char)48;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)-17601;
unsigned long long int var_16 = 12404948712160589246ULL;
signed char var_17 = (signed char)61;
unsigned int var_18 = 1366544762U;
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
