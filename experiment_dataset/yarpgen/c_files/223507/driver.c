#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28047;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 4010983977U;
unsigned int var_8 = 1327568656U;
_Bool var_17 = (_Bool)1;
short var_19 = (short)-20607;
int zero = 0;
short var_20 = (short)5545;
_Bool var_21 = (_Bool)1;
long long int var_22 = 8561411257396183931LL;
unsigned char var_23 = (unsigned char)58;
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
