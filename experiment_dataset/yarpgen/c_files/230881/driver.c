#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned int var_1 = 3819437529U;
unsigned char var_5 = (unsigned char)33;
unsigned short var_12 = (unsigned short)32361;
int zero = 0;
signed char var_13 = (signed char)39;
long long int var_14 = -8391095060112653019LL;
short var_15 = (short)-22064;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
