#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41776;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-22804;
unsigned char var_12 = (unsigned char)71;
int zero = 0;
short var_13 = (short)7755;
unsigned short var_14 = (unsigned short)41325;
unsigned char var_15 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
