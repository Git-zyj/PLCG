#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 831336338;
unsigned char var_5 = (unsigned char)85;
long long int var_6 = -5682323166317394540LL;
unsigned long long int var_7 = 10038480740277549303ULL;
unsigned short var_9 = (unsigned short)37771;
int var_18 = -2005879293;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)17014;
long long int var_22 = 8105608678706819329LL;
unsigned short var_23 = (unsigned short)46036;
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
