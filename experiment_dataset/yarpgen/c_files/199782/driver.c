#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = -625040565;
unsigned short var_12 = (unsigned short)10199;
unsigned char var_13 = (unsigned char)205;
unsigned short var_18 = (unsigned short)52345;
int zero = 0;
unsigned char var_19 = (unsigned char)161;
unsigned short var_20 = (unsigned short)20453;
unsigned short var_21 = (unsigned short)15769;
unsigned short var_22 = (unsigned short)154;
signed char var_23 = (signed char)-4;
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
