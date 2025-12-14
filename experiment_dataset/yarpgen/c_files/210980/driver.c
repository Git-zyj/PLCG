#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 586067560348145752LL;
unsigned long long int var_10 = 8615136814145411894ULL;
unsigned short var_12 = (unsigned short)19199;
unsigned int var_13 = 3030023978U;
int zero = 0;
signed char var_16 = (signed char)40;
unsigned short var_17 = (unsigned short)39908;
short var_18 = (short)-30277;
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
