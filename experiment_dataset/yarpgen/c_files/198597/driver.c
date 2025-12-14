#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4054206386U;
short var_3 = (short)24662;
unsigned short var_8 = (unsigned short)48756;
unsigned short var_13 = (unsigned short)31182;
short var_15 = (short)24535;
unsigned int var_17 = 809029313U;
int zero = 0;
short var_19 = (short)13104;
signed char var_20 = (signed char)-8;
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
