#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)127;
unsigned int var_5 = 2635939695U;
unsigned long long int var_6 = 748678646619053038ULL;
unsigned int var_7 = 1821592934U;
unsigned int var_11 = 835106516U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-126;
unsigned int var_17 = 607277484U;
unsigned short var_18 = (unsigned short)27605;
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
