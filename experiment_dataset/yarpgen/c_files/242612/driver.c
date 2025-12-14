#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)106;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-18441;
_Bool var_6 = (_Bool)0;
long long int var_7 = -6731505135868359160LL;
unsigned short var_11 = (unsigned short)11176;
short var_12 = (short)-415;
_Bool var_13 = (_Bool)1;
short var_16 = (short)4122;
int zero = 0;
long long int var_17 = 6733176069895786271LL;
unsigned short var_18 = (unsigned short)46128;
void init() {
}

void checksum() {
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
