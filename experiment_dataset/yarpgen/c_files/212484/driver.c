#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 914412769;
unsigned short var_1 = (unsigned short)6526;
_Bool var_11 = (_Bool)0;
int var_12 = -668457311;
signed char var_15 = (signed char)-24;
int zero = 0;
signed char var_16 = (signed char)-44;
short var_17 = (short)32089;
signed char var_18 = (signed char)113;
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
