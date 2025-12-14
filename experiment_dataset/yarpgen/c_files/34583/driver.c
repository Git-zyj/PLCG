#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6858;
signed char var_2 = (signed char)59;
int var_6 = -1089803370;
int var_10 = -2099091988;
unsigned short var_11 = (unsigned short)22406;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)57;
signed char var_15 = (signed char)-12;
signed char var_16 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
