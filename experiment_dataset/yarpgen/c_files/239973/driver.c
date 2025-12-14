#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2829072273065866053ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)32257;
signed char var_7 = (signed char)-87;
unsigned short var_8 = (unsigned short)41516;
unsigned long long int var_9 = 18045859974874734504ULL;
int zero = 0;
short var_10 = (short)1929;
signed char var_11 = (signed char)43;
signed char var_12 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
