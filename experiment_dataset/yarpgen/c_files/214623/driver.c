#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 840796498;
short var_7 = (short)-12685;
long long int var_8 = 5980672624725034948LL;
unsigned long long int var_12 = 15892584558913847759ULL;
int zero = 0;
unsigned int var_16 = 1477269201U;
signed char var_17 = (signed char)65;
unsigned long long int var_18 = 11285968443617986193ULL;
unsigned short var_19 = (unsigned short)20623;
long long int var_20 = -594853286599447014LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
