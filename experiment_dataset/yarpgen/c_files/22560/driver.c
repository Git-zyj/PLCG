#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5012574629115507298LL;
int var_3 = 354406947;
unsigned int var_4 = 2767869985U;
unsigned short var_6 = (unsigned short)46669;
unsigned long long int var_7 = 12010280893506770719ULL;
signed char var_8 = (signed char)101;
unsigned int var_13 = 181541641U;
unsigned char var_15 = (unsigned char)168;
int zero = 0;
signed char var_17 = (signed char)-108;
unsigned char var_18 = (unsigned char)229;
long long int var_19 = 7541451038885381214LL;
signed char var_20 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
