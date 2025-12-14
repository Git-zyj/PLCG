#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 140324221;
unsigned char var_6 = (unsigned char)134;
signed char var_11 = (signed char)57;
unsigned int var_13 = 3510765025U;
unsigned short var_14 = (unsigned short)19750;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)26;
int var_19 = -512719955;
signed char var_20 = (signed char)-86;
void init() {
}

void checksum() {
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
