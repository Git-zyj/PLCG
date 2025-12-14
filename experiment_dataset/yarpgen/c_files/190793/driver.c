#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)31;
short var_17 = (short)30410;
unsigned char var_18 = (unsigned char)183;
int zero = 0;
unsigned char var_19 = (unsigned char)191;
short var_20 = (short)4656;
unsigned short var_21 = (unsigned short)4968;
unsigned short var_22 = (unsigned short)17799;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
