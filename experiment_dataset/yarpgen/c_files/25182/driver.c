#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)220;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)49062;
unsigned char var_11 = (unsigned char)220;
_Bool var_12 = (_Bool)1;
long long int var_16 = -5663050370055262100LL;
unsigned long long int var_17 = 6620531028124991048ULL;
int zero = 0;
int var_18 = 683400650;
unsigned int var_19 = 822080917U;
unsigned int var_20 = 1322752386U;
void init() {
}

void checksum() {
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
