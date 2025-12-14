#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_5 = 17474647152626885404ULL;
unsigned int var_7 = 2368512026U;
unsigned int var_8 = 3765234475U;
short var_11 = (short)30041;
int zero = 0;
signed char var_12 = (signed char)32;
unsigned short var_13 = (unsigned short)44161;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
