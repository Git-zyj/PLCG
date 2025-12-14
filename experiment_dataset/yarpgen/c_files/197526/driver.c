#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18597;
unsigned long long int var_8 = 4275795732986802245ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)37339;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)57;
int zero = 0;
long long int var_16 = -6637759209731985324LL;
unsigned char var_17 = (unsigned char)215;
unsigned long long int var_18 = 17537474630752941708ULL;
int var_19 = -685172317;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
