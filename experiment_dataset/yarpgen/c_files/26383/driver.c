#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2555163753U;
long long int var_15 = 8083559607106454880LL;
int zero = 0;
unsigned int var_16 = 1615462250U;
short var_17 = (short)-11911;
unsigned short var_18 = (unsigned short)20606;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
