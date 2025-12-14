#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)245;
unsigned int var_5 = 3721851146U;
unsigned int var_6 = 3137709905U;
unsigned int var_10 = 4087296092U;
short var_13 = (short)25474;
int zero = 0;
signed char var_14 = (signed char)-91;
long long int var_15 = 5777862589163707439LL;
signed char var_16 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
