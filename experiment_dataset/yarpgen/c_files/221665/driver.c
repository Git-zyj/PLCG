#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 247282527;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int var_12 = -1414605183;
int zero = 0;
short var_14 = (short)-29154;
unsigned short var_15 = (unsigned short)44293;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
