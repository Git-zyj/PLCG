#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12963319238649380247ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_12 = (unsigned char)206;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)57744;
short var_16 = (short)-12170;
int zero = 0;
short var_19 = (short)3846;
unsigned short var_20 = (unsigned short)52722;
unsigned long long int var_21 = 1644432922519123336ULL;
unsigned char var_22 = (unsigned char)220;
unsigned short var_23 = (unsigned short)37185;
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
