#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1716668014;
long long int var_6 = -4859063779866240866LL;
signed char var_10 = (signed char)-25;
int var_11 = -368068824;
short var_12 = (short)-22327;
signed char var_14 = (signed char)-38;
int var_15 = -1625855254;
unsigned char var_16 = (unsigned char)44;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)12;
unsigned char var_20 = (unsigned char)71;
unsigned short var_21 = (unsigned short)63810;
int var_22 = 876286048;
void init() {
}

void checksum() {
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
