#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2094652850;
signed char var_2 = (signed char)-40;
int var_10 = -799566595;
unsigned int var_11 = 2376889269U;
signed char var_12 = (signed char)-52;
int var_13 = 1477424759;
unsigned char var_14 = (unsigned char)126;
unsigned int var_15 = 3557169421U;
unsigned int var_16 = 1524841258U;
int zero = 0;
int var_17 = -819503702;
long long int var_18 = 4397901929928239326LL;
int var_19 = 1833405330;
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
