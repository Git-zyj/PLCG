#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)100;
signed char var_6 = (signed char)59;
unsigned short var_7 = (unsigned short)3890;
unsigned short var_12 = (unsigned short)51026;
unsigned char var_14 = (unsigned char)80;
signed char var_15 = (signed char)-25;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)56210;
signed char var_18 = (signed char)-24;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-89;
void init() {
}

void checksum() {
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
