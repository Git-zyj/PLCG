#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1611327834;
short var_2 = (short)23109;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-1578;
short var_10 = (short)29498;
int zero = 0;
signed char var_14 = (signed char)-31;
unsigned long long int var_15 = 13379973763369692929ULL;
unsigned short var_16 = (unsigned short)32765;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
