#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-32165;
short var_3 = (short)-1599;
long long int var_4 = 74974504399334159LL;
long long int var_5 = 1293579760883980547LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)23446;
short var_15 = (short)10166;
int zero = 0;
short var_17 = (short)-3892;
int var_18 = -564842262;
int var_19 = -1709239798;
unsigned int var_20 = 530674103U;
long long int var_21 = 3177449361646957676LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
