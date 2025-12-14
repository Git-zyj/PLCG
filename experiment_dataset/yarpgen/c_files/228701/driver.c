#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)5125;
_Bool var_6 = (_Bool)1;
short var_11 = (short)27280;
int var_12 = 2046922072;
int zero = 0;
unsigned int var_16 = 2329389974U;
int var_17 = -30558916;
short var_18 = (short)-30466;
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
