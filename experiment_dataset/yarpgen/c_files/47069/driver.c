#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)1559;
unsigned short var_6 = (unsigned short)49488;
short var_13 = (short)-26956;
int zero = 0;
signed char var_17 = (signed char)74;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)36570;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
