#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)185;
unsigned char var_11 = (unsigned char)45;
unsigned char var_12 = (unsigned char)72;
int var_14 = 2002534854;
int var_15 = 1928367167;
int zero = 0;
signed char var_16 = (signed char)-19;
int var_17 = 534290773;
unsigned long long int var_18 = 6922116714199764594ULL;
unsigned long long int var_19 = 15517176792500725984ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
