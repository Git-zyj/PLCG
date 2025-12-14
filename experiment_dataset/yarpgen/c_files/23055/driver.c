#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2603885766U;
int var_2 = 1987792587;
int var_4 = 1234363917;
_Bool var_7 = (_Bool)1;
int var_10 = -272455229;
int zero = 0;
unsigned short var_12 = (unsigned short)24486;
short var_13 = (short)-32443;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
