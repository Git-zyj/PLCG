#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7246;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)31613;
short var_3 = (short)-16006;
unsigned int var_4 = 1582496655U;
signed char var_5 = (signed char)115;
int zero = 0;
long long int var_10 = -1498377385168856326LL;
long long int var_11 = 6024484285093431367LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
