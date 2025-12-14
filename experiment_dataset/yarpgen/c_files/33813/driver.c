#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18749;
unsigned char var_4 = (unsigned char)90;
short var_6 = (short)20413;
unsigned long long int var_7 = 13170159357125755647ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 5896468628765152460LL;
short var_12 = (short)748;
int zero = 0;
long long int var_13 = -5134571717398704292LL;
unsigned long long int var_14 = 13050223894104955544ULL;
long long int var_15 = 8797280680731968262LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
