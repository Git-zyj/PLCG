#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -73087668;
unsigned short var_3 = (unsigned short)29586;
short var_5 = (short)-28642;
unsigned long long int var_6 = 1940364519986872039ULL;
unsigned short var_13 = (unsigned short)34776;
signed char var_18 = (signed char)-53;
int zero = 0;
unsigned long long int var_19 = 7744376884491966385ULL;
long long int var_20 = 1897545679519803876LL;
void init() {
}

void checksum() {
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
