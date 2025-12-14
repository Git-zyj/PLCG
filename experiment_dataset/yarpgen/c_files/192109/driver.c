#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5814;
unsigned short var_1 = (unsigned short)65008;
short var_2 = (short)22927;
signed char var_4 = (signed char)-127;
signed char var_5 = (signed char)-79;
unsigned char var_6 = (unsigned char)2;
short var_7 = (short)12145;
unsigned char var_8 = (unsigned char)92;
_Bool var_9 = (_Bool)0;
int var_12 = 398975162;
signed char var_13 = (signed char)-29;
unsigned short var_16 = (unsigned short)54220;
int zero = 0;
short var_17 = (short)20592;
_Bool var_18 = (_Bool)1;
int var_19 = -1821149428;
unsigned short var_20 = (unsigned short)16606;
signed char var_21 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
