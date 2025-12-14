#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8989652472849468342LL;
unsigned short var_2 = (unsigned short)63860;
_Bool var_7 = (_Bool)1;
short var_12 = (short)-31423;
int zero = 0;
unsigned short var_16 = (unsigned short)34435;
unsigned short var_17 = (unsigned short)36591;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
