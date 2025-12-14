#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8384186386709164021LL;
unsigned int var_1 = 1115490515U;
unsigned short var_2 = (unsigned short)26577;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-30668;
short var_6 = (short)23697;
int zero = 0;
signed char var_14 = (signed char)21;
signed char var_15 = (signed char)21;
unsigned char var_16 = (unsigned char)3;
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
