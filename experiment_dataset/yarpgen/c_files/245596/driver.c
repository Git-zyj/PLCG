#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
int var_2 = 2005118557;
unsigned short var_4 = (unsigned short)63145;
_Bool var_5 = (_Bool)1;
int var_6 = -2052388365;
long long int var_8 = -9218586633972042596LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-23;
short var_14 = (short)6219;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
