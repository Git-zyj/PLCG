#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2108747581;
unsigned short var_5 = (unsigned short)41427;
unsigned short var_8 = (unsigned short)24852;
unsigned short var_11 = (unsigned short)51614;
int var_13 = -1093526461;
unsigned int var_16 = 3146845761U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)157;
unsigned int var_21 = 3416998038U;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-9860;
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
