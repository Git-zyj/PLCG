#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56292;
unsigned short var_10 = (unsigned short)48867;
int var_13 = 1423267901;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4391402785922858185LL;
short var_22 = (short)-1767;
long long int var_23 = 2921673977170263020LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
