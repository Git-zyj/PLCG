#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2095787346;
unsigned short var_4 = (unsigned short)4952;
int var_10 = -1580449582;
int var_13 = 884404536;
unsigned short var_14 = (unsigned short)17458;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)28444;
signed char var_21 = (signed char)82;
int var_22 = 1627419700;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
