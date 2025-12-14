#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)25796;
short var_7 = (short)-32001;
unsigned char var_10 = (unsigned char)134;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
long long int var_17 = 439889189560752418LL;
unsigned long long int var_18 = 962913498611444799ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-8122;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
