#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_8 = 3873219251U;
unsigned char var_11 = (unsigned char)183;
int var_13 = 1682371212;
int var_15 = -1472703693;
int var_16 = -1925466109;
unsigned char var_17 = (unsigned char)173;
int zero = 0;
signed char var_19 = (signed char)104;
long long int var_20 = 3717021393098381299LL;
signed char var_21 = (signed char)-123;
unsigned int var_22 = 2058200003U;
unsigned char var_23 = (unsigned char)252;
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
