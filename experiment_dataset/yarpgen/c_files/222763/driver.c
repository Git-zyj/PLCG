#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -233063690;
signed char var_4 = (signed char)-66;
unsigned short var_12 = (unsigned short)23224;
short var_16 = (short)2502;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16431188811389705944ULL;
unsigned long long int var_20 = 671528394956796517ULL;
void init() {
}

void checksum() {
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
