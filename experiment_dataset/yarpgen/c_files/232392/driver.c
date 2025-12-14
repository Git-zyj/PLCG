#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)322;
short var_3 = (short)-23575;
unsigned short var_4 = (unsigned short)52276;
signed char var_5 = (signed char)78;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 11836187224443554405ULL;
unsigned long long int var_12 = 12799293490633865441ULL;
signed char var_13 = (signed char)-104;
unsigned char var_14 = (unsigned char)120;
unsigned char var_15 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
