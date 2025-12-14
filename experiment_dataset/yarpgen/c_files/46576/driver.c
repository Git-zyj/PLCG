#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1760422932707659364ULL;
long long int var_2 = 2399418229860646887LL;
unsigned char var_6 = (unsigned char)212;
long long int var_7 = 6734686517894491226LL;
_Bool var_9 = (_Bool)1;
int var_11 = -86470640;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 1067996469;
signed char var_15 = (signed char)-83;
long long int var_16 = 1335033922915807210LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
