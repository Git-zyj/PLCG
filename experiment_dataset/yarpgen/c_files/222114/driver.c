#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned char var_1 = (unsigned char)29;
unsigned int var_5 = 1084723708U;
signed char var_10 = (signed char)60;
int zero = 0;
short var_14 = (short)22476;
unsigned int var_15 = 3053383302U;
short var_16 = (short)19885;
long long int var_17 = 4785391661508276998LL;
signed char var_18 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
