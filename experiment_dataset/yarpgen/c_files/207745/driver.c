#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64080;
signed char var_4 = (signed char)83;
int var_6 = 1328209372;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-6418;
unsigned short var_10 = (unsigned short)65129;
int zero = 0;
int var_20 = -1570684342;
short var_21 = (short)-23572;
unsigned long long int var_22 = 6303078211548471831ULL;
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
