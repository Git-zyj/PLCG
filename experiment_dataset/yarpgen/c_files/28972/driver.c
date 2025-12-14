#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 838209602U;
unsigned short var_4 = (unsigned short)19254;
long long int var_6 = 8705062594868421942LL;
unsigned int var_11 = 513722821U;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3894112828U;
unsigned char var_17 = (unsigned char)214;
signed char var_18 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
