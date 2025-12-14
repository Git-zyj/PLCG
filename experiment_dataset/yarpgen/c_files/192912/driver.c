#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6569799282296016792LL;
unsigned int var_2 = 963474414U;
unsigned short var_3 = (unsigned short)32468;
signed char var_6 = (signed char)-47;
unsigned int var_11 = 4223215981U;
signed char var_12 = (signed char)-47;
unsigned int var_13 = 1322956539U;
int zero = 0;
int var_15 = -1832163283;
unsigned short var_16 = (unsigned short)24901;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
