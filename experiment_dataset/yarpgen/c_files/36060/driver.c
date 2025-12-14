#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1217238975U;
long long int var_8 = -649431371719626071LL;
unsigned int var_12 = 3379953627U;
int zero = 0;
short var_16 = (short)-10069;
unsigned short var_17 = (unsigned short)28468;
signed char var_18 = (signed char)-14;
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
