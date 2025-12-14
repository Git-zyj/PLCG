#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17706996546278113423ULL;
signed char var_4 = (signed char)-108;
signed char var_6 = (signed char)-81;
unsigned int var_8 = 1840194992U;
unsigned int var_11 = 4171243266U;
unsigned char var_12 = (unsigned char)152;
unsigned int var_13 = 2741863740U;
unsigned short var_14 = (unsigned short)53775;
unsigned int var_15 = 2268259133U;
int zero = 0;
unsigned short var_16 = (unsigned short)52548;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-65;
short var_19 = (short)16661;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
