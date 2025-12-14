#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 25890110U;
int var_11 = 447300419;
unsigned int var_12 = 1187891381U;
int var_15 = 1744720533;
int var_19 = 1601033042;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 105334972U;
unsigned int var_22 = 3281919276U;
unsigned char var_23 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
