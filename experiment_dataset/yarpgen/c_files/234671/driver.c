#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)9686;
unsigned char var_6 = (unsigned char)34;
unsigned long long int var_8 = 17326465847155399795ULL;
signed char var_11 = (signed char)69;
int zero = 0;
int var_14 = -574588849;
unsigned char var_15 = (unsigned char)171;
long long int var_16 = 9061699935223576525LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
