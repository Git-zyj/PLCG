#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_5 = (unsigned short)20984;
short var_6 = (short)-10643;
long long int var_15 = -8347362410834255995LL;
short var_16 = (short)-9606;
int zero = 0;
short var_20 = (short)12210;
short var_21 = (short)761;
unsigned short var_22 = (unsigned short)57036;
void init() {
}

void checksum() {
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
