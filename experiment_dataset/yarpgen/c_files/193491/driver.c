#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3691396872U;
unsigned char var_4 = (unsigned char)116;
int var_5 = 1881744359;
short var_7 = (short)10250;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)71;
unsigned char var_10 = (unsigned char)118;
short var_11 = (short)-30413;
int zero = 0;
unsigned char var_12 = (unsigned char)231;
short var_13 = (short)-12544;
int var_14 = 933430896;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
