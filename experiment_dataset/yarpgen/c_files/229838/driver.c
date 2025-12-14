#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8062509683548184433LL;
unsigned char var_2 = (unsigned char)103;
unsigned int var_5 = 1660935338U;
long long int var_8 = 7174025209052387029LL;
unsigned long long int var_10 = 615321453983162576ULL;
signed char var_11 = (signed char)73;
unsigned char var_12 = (unsigned char)230;
signed char var_13 = (signed char)66;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 9634242847934693673ULL;
int zero = 0;
signed char var_19 = (signed char)53;
int var_20 = 1976332403;
void init() {
}

void checksum() {
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
