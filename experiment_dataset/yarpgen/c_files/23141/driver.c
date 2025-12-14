#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28381;
unsigned short var_1 = (unsigned short)53967;
unsigned int var_2 = 923850864U;
short var_4 = (short)15893;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)80;
int zero = 0;
unsigned short var_11 = (unsigned short)25812;
short var_12 = (short)6084;
short var_13 = (short)13493;
unsigned char var_14 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
