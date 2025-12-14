#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13912;
unsigned char var_5 = (unsigned char)151;
long long int var_6 = -3021021287011890393LL;
_Bool var_8 = (_Bool)0;
short var_10 = (short)6441;
signed char var_11 = (signed char)123;
short var_14 = (short)-24811;
int var_17 = 1511382581;
int zero = 0;
unsigned int var_18 = 1888179289U;
unsigned int var_19 = 3911129323U;
signed char var_20 = (signed char)34;
long long int var_21 = 3811305559890300046LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
