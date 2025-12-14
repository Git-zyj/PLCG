#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
long long int var_8 = -6092656227126769924LL;
unsigned char var_9 = (unsigned char)120;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-100;
signed char var_14 = (signed char)113;
signed char var_15 = (signed char)42;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
int var_18 = -2004411455;
unsigned long long int var_19 = 4671555152394341754ULL;
void init() {
}

void checksum() {
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
