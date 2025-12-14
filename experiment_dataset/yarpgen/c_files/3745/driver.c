#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)45721;
unsigned int var_10 = 1482595838U;
signed char var_11 = (signed char)-47;
int zero = 0;
long long int var_16 = -5611002965968229247LL;
short var_17 = (short)-2180;
signed char var_18 = (signed char)22;
void init() {
}

void checksum() {
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
