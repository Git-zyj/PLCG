#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2035751115U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)6573;
int var_7 = -2039986704;
int zero = 0;
int var_14 = 2011273165;
unsigned short var_15 = (unsigned short)22628;
unsigned int var_16 = 2815015309U;
int var_17 = 500066431;
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
