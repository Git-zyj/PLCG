#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 12050388051716632194ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)171;
int zero = 0;
unsigned short var_11 = (unsigned short)57925;
unsigned short var_12 = (unsigned short)17452;
int var_13 = -2047520053;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
