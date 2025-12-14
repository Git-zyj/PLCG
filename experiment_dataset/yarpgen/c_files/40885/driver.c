#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2025435234U;
unsigned int var_10 = 3220834453U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-11842;
unsigned int var_13 = 1613619260U;
int zero = 0;
unsigned long long int var_15 = 1612556884806235620ULL;
short var_16 = (short)-9960;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
