#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22869;
unsigned char var_1 = (unsigned char)209;
short var_7 = (short)-23478;
_Bool var_9 = (_Bool)0;
short var_10 = (short)6892;
signed char var_12 = (signed char)107;
short var_14 = (short)-11985;
int zero = 0;
unsigned short var_15 = (unsigned short)36243;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
