#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1597432192U;
unsigned short var_1 = (unsigned short)33987;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)5027;
short var_14 = (short)-10777;
short var_15 = (short)10415;
int zero = 0;
signed char var_17 = (signed char)68;
short var_18 = (short)-23472;
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
