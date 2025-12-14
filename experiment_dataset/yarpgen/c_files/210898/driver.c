#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28092;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 4059597770U;
unsigned char var_4 = (unsigned char)86;
unsigned char var_6 = (unsigned char)70;
signed char var_8 = (signed char)37;
int zero = 0;
short var_10 = (short)15788;
short var_11 = (short)-14478;
unsigned char var_12 = (unsigned char)69;
unsigned char var_13 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
