#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)18972;
unsigned short var_4 = (unsigned short)23678;
_Bool var_5 = (_Bool)1;
short var_14 = (short)7586;
int zero = 0;
signed char var_17 = (signed char)-21;
unsigned short var_18 = (unsigned short)26699;
int var_19 = -357447076;
short var_20 = (short)-14481;
short var_21 = (short)-26706;
long long int var_22 = -6560584300668661741LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
