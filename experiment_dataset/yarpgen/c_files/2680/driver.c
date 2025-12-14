#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36970;
unsigned short var_2 = (unsigned short)411;
short var_4 = (short)18794;
unsigned short var_5 = (unsigned short)41382;
unsigned short var_6 = (unsigned short)563;
unsigned short var_8 = (unsigned short)53392;
unsigned char var_13 = (unsigned char)48;
unsigned short var_14 = (unsigned short)7562;
int zero = 0;
short var_17 = (short)-32191;
unsigned short var_18 = (unsigned short)63886;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
