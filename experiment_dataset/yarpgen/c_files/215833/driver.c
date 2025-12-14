#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1885;
_Bool var_3 = (_Bool)0;
int var_4 = 336951575;
int var_8 = -2047934469;
unsigned char var_11 = (unsigned char)7;
int var_14 = -1820906804;
int zero = 0;
long long int var_19 = -7791483510616398449LL;
unsigned short var_20 = (unsigned short)28151;
unsigned short var_21 = (unsigned short)25481;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
