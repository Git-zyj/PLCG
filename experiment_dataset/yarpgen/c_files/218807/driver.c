#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5941;
signed char var_5 = (signed char)45;
unsigned short var_10 = (unsigned short)16345;
long long int var_13 = -4496487753150417488LL;
unsigned short var_14 = (unsigned short)2754;
unsigned short var_15 = (unsigned short)34103;
unsigned long long int var_17 = 5471974579433227315ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)8207;
long long int var_19 = 1591632131119808637LL;
void init() {
}

void checksum() {
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
