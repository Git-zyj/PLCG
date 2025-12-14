#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54592;
signed char var_4 = (signed char)-42;
int var_6 = -1583174661;
short var_8 = (short)-5319;
unsigned char var_9 = (unsigned char)85;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)60069;
signed char var_12 = (signed char)47;
signed char var_13 = (signed char)88;
signed char var_14 = (signed char)-87;
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
