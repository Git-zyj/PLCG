#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -530281832;
unsigned int var_1 = 1496975061U;
signed char var_3 = (signed char)29;
short var_4 = (short)-23934;
long long int var_5 = 3025419927080598107LL;
_Bool var_7 = (_Bool)1;
long long int var_10 = 1747800870174423087LL;
int zero = 0;
long long int var_15 = 8049094582243055445LL;
unsigned int var_16 = 7851300U;
long long int var_17 = -7457672974520180759LL;
void init() {
}

void checksum() {
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
