#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 36695883;
unsigned short var_5 = (unsigned short)107;
signed char var_6 = (signed char)-20;
unsigned int var_7 = 435612575U;
signed char var_14 = (signed char)-57;
int zero = 0;
short var_16 = (short)-2329;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
