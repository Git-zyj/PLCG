#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-17011;
unsigned char var_3 = (unsigned char)115;
long long int var_4 = 7897186547724265061LL;
unsigned short var_8 = (unsigned short)46951;
signed char var_15 = (signed char)10;
int zero = 0;
signed char var_17 = (signed char)79;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1386545700U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
