#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8794240166630710071LL;
signed char var_4 = (signed char)-53;
unsigned short var_5 = (unsigned short)21965;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)6;
short var_10 = (short)-1573;
unsigned char var_11 = (unsigned char)72;
int zero = 0;
unsigned short var_13 = (unsigned short)26272;
int var_14 = -612125083;
unsigned long long int var_15 = 18130951174865122245ULL;
unsigned int var_16 = 2629059142U;
signed char var_17 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
