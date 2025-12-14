#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3440055487U;
signed char var_1 = (signed char)-73;
int var_2 = 1250851260;
signed char var_3 = (signed char)26;
short var_5 = (short)-15744;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)-15;
int zero = 0;
int var_11 = 702870990;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)58859;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
