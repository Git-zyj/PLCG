#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1350545958;
unsigned char var_2 = (unsigned char)70;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-28;
signed char var_16 = (signed char)55;
int zero = 0;
unsigned int var_18 = 1184029062U;
short var_19 = (short)6744;
short var_20 = (short)21547;
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
