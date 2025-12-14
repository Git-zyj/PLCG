#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 107738723U;
long long int var_2 = -2675972155089082975LL;
unsigned char var_4 = (unsigned char)78;
signed char var_8 = (signed char)12;
int var_11 = -1041870753;
unsigned int var_12 = 4013528714U;
short var_14 = (short)-9696;
int zero = 0;
long long int var_15 = 1695103301031696622LL;
unsigned int var_16 = 1376250631U;
short var_17 = (short)21398;
unsigned int var_18 = 3382752058U;
unsigned short var_19 = (unsigned short)1683;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
