#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1741107280;
unsigned char var_4 = (unsigned char)226;
_Bool var_5 = (_Bool)1;
short var_12 = (short)27141;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1663521515;
int var_18 = 1377126708;
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
