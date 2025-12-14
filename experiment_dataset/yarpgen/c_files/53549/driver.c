#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -335219409;
_Bool var_4 = (_Bool)0;
unsigned short var_9 = (unsigned short)38514;
int var_14 = -365791175;
unsigned short var_16 = (unsigned short)52147;
unsigned short var_18 = (unsigned short)20971;
int zero = 0;
unsigned int var_20 = 1284853616U;
signed char var_21 = (signed char)-99;
signed char var_22 = (signed char)-50;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
