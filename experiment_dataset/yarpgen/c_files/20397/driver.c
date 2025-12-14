#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42060;
unsigned short var_3 = (unsigned short)25339;
unsigned char var_4 = (unsigned char)128;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)57261;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-85;
int zero = 0;
unsigned short var_15 = (unsigned short)47891;
short var_16 = (short)-14445;
void init() {
}

void checksum() {
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
