#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60190;
int var_4 = 1334566749;
int var_6 = 1877682721;
unsigned int var_8 = 1392815636U;
int var_11 = 1501089750;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 770593943;
_Bool var_18 = (_Bool)0;
int var_19 = -2123000064;
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
