#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6087;
unsigned short var_2 = (unsigned short)61530;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 5102305763520974494ULL;
unsigned short var_8 = (unsigned short)29290;
int zero = 0;
unsigned char var_10 = (unsigned char)192;
int var_11 = 1918385265;
unsigned long long int var_12 = 17449859941652562434ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
