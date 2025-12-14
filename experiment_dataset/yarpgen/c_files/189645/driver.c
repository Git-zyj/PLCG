#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5129034054389117637LL;
unsigned short var_7 = (unsigned short)7298;
long long int var_12 = 8454661570989472316LL;
int zero = 0;
unsigned long long int var_13 = 6550965907173787349ULL;
long long int var_14 = -5698148894989274971LL;
unsigned short var_15 = (unsigned short)8293;
long long int var_16 = -5435616530181074665LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
