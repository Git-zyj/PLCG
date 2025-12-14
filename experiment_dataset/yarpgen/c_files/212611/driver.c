#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6447593890007033120LL;
unsigned int var_3 = 3160047628U;
_Bool var_7 = (_Bool)1;
long long int var_8 = -1351869358088773777LL;
unsigned char var_11 = (unsigned char)71;
int var_14 = -151905871;
int zero = 0;
unsigned int var_18 = 2803180095U;
unsigned char var_19 = (unsigned char)101;
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
