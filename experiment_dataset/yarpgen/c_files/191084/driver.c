#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12718;
long long int var_2 = -8955211621846591782LL;
unsigned char var_8 = (unsigned char)61;
short var_10 = (short)27186;
unsigned char var_14 = (unsigned char)43;
long long int var_15 = 4030944564310317096LL;
int zero = 0;
long long int var_19 = 5816430208670727431LL;
long long int var_20 = -52224440101835136LL;
unsigned long long int var_21 = 16670581383011258597ULL;
long long int var_22 = -7814416339848031318LL;
short var_23 = (short)-19360;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
