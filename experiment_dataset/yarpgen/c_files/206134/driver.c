#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60935;
unsigned char var_3 = (unsigned char)51;
_Bool var_5 = (_Bool)1;
int var_10 = -920707088;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_14 = 1153901918;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)86;
int var_17 = -2124666885;
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
