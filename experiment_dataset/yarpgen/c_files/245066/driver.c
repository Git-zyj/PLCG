#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 162183643U;
int var_5 = -289664101;
signed char var_6 = (signed char)38;
short var_7 = (short)-6082;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)176;
int var_13 = 2099049419;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)27498;
unsigned short var_18 = (unsigned short)65209;
unsigned short var_19 = (unsigned short)3255;
int var_20 = -2117993725;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
