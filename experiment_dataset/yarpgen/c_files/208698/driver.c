#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33787;
signed char var_3 = (signed char)-99;
signed char var_4 = (signed char)-45;
short var_6 = (short)28163;
unsigned char var_7 = (unsigned char)158;
long long int var_11 = 9009157738172340089LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)182;
int zero = 0;
signed char var_14 = (signed char)35;
short var_15 = (short)5043;
signed char var_16 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
