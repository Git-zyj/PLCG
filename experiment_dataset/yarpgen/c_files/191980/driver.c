#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17575;
short var_4 = (short)-3012;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)34761;
signed char var_15 = (signed char)60;
int zero = 0;
signed char var_17 = (signed char)78;
unsigned short var_18 = (unsigned short)52178;
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
