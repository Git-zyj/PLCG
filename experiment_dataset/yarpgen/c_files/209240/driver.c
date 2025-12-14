#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14163;
long long int var_5 = -8002437372949171195LL;
long long int var_7 = -1890310768129979944LL;
signed char var_8 = (signed char)-73;
short var_10 = (short)-6875;
int zero = 0;
signed char var_16 = (signed char)96;
unsigned int var_17 = 2761651654U;
void init() {
}

void checksum() {
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
