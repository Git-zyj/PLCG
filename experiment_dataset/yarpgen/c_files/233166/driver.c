#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12459055436232366999ULL;
unsigned long long int var_13 = 8122066514882256775ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)28192;
signed char var_18 = (signed char)-47;
unsigned short var_19 = (unsigned short)51742;
unsigned short var_20 = (unsigned short)14098;
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
