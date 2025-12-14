#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32389;
signed char var_11 = (signed char)-100;
unsigned long long int var_13 = 17369869412591605162ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)235;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int var_17 = -1710600985;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
