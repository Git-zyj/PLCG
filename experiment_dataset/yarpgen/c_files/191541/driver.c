#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3935;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)4;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)2472;
int zero = 0;
signed char var_13 = (signed char)52;
short var_14 = (short)3195;
unsigned char var_15 = (unsigned char)199;
void init() {
}

void checksum() {
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
