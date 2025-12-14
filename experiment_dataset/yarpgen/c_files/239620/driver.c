#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
unsigned int var_1 = 3611285480U;
unsigned int var_2 = 1770119504U;
short var_3 = (short)14267;
unsigned char var_6 = (unsigned char)82;
unsigned short var_11 = (unsigned short)28150;
int zero = 0;
short var_13 = (short)-17471;
unsigned short var_14 = (unsigned short)38472;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
