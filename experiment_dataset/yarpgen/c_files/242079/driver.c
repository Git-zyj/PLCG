#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)21820;
long long int var_6 = 1317386897355613706LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)18866;
signed char var_13 = (signed char)38;
int var_15 = -1298085713;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)6451;
_Bool var_18 = (_Bool)1;
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
