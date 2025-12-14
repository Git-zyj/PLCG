#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49668;
signed char var_2 = (signed char)113;
unsigned int var_3 = 3733098995U;
unsigned int var_6 = 1660061725U;
unsigned short var_7 = (unsigned short)12272;
_Bool var_8 = (_Bool)1;
short var_11 = (short)23916;
int zero = 0;
int var_13 = 2527423;
short var_14 = (short)1426;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
