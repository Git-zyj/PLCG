#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
short var_4 = (short)25307;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-12597;
unsigned long long int var_8 = 11863158266501803533ULL;
unsigned long long int var_10 = 7497434299496956015ULL;
short var_12 = (short)31211;
int var_14 = 386328980;
int zero = 0;
long long int var_16 = -859198836332270277LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)32404;
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
