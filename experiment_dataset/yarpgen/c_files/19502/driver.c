#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9180;
_Bool var_7 = (_Bool)1;
short var_12 = (short)20429;
short var_13 = (short)-14866;
int zero = 0;
short var_15 = (short)228;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)44966;
short var_18 = (short)519;
short var_19 = (short)5883;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
