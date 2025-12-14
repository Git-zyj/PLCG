#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1457453278;
int var_6 = 1714457796;
short var_9 = (short)32366;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)27542;
short var_12 = (short)27428;
int var_14 = 723389558;
int zero = 0;
unsigned short var_20 = (unsigned short)11503;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
