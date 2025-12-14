#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
signed char var_1 = (signed char)13;
signed char var_3 = (signed char)-34;
unsigned short var_4 = (unsigned short)27728;
unsigned char var_5 = (unsigned char)145;
unsigned short var_7 = (unsigned short)11271;
int var_8 = 1014709276;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)224;
signed char var_13 = (signed char)66;
int var_14 = -866966005;
short var_15 = (short)-362;
signed char var_16 = (signed char)91;
unsigned char var_17 = (unsigned char)139;
int var_18 = 1520670780;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-15177;
_Bool var_21 = (_Bool)1;
int var_22 = -1057444422;
unsigned long long int var_23 = 5453625321402657449ULL;
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
