#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2584319987U;
unsigned int var_6 = 7240115U;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_17 = -1568465471098701575LL;
short var_18 = (short)24513;
unsigned int var_19 = 230920900U;
void init() {
}

void checksum() {
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
