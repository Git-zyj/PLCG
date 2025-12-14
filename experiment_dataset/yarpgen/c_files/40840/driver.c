#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7910321873370683710LL;
long long int var_10 = 1245276883322708638LL;
long long int var_11 = -3433298991947417077LL;
unsigned short var_13 = (unsigned short)12037;
short var_14 = (short)-13154;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)29;
unsigned int var_18 = 813686421U;
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
