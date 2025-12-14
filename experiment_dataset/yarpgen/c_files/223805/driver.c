#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16916;
unsigned int var_6 = 886842229U;
int var_9 = 2003250997;
unsigned int var_14 = 1174904180U;
int zero = 0;
short var_18 = (short)22896;
short var_19 = (short)-21687;
long long int var_20 = -3144944958693846427LL;
unsigned int var_21 = 855782574U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
