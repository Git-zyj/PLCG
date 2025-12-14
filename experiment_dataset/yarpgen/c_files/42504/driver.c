#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
int var_2 = -251230000;
long long int var_5 = 5516254807759578038LL;
unsigned short var_7 = (unsigned short)12616;
unsigned char var_8 = (unsigned char)30;
unsigned char var_9 = (unsigned char)229;
unsigned char var_11 = (unsigned char)170;
unsigned char var_12 = (unsigned char)58;
int zero = 0;
unsigned short var_20 = (unsigned short)33113;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-1127;
void init() {
}

void checksum() {
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
