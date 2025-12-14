#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7680917170264110379ULL;
int var_6 = 565806974;
_Bool var_7 = (_Bool)0;
short var_12 = (short)853;
int zero = 0;
signed char var_15 = (signed char)-28;
unsigned int var_16 = 1561900232U;
unsigned int var_17 = 3528575179U;
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
