#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)14594;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-479;
int var_14 = 2009952795;
unsigned long long int var_15 = 16777075143355715892ULL;
unsigned long long int var_16 = 9107570608682072476ULL;
int zero = 0;
short var_19 = (short)12626;
short var_20 = (short)-29163;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
