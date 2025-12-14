#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15026060446675735098ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)8590;
unsigned char var_8 = (unsigned char)254;
_Bool var_9 = (_Bool)1;
short var_10 = (short)10971;
short var_12 = (short)-29812;
unsigned long long int var_13 = 17321846853819039804ULL;
unsigned long long int var_14 = 4602132834223356916ULL;
unsigned char var_17 = (unsigned char)157;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)44033;
unsigned short var_20 = (unsigned short)40198;
unsigned long long int var_21 = 16548833106652292765ULL;
unsigned int var_22 = 703344809U;
unsigned char var_23 = (unsigned char)112;
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
