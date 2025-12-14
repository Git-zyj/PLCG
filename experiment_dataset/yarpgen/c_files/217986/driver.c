#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 776278032U;
unsigned int var_1 = 2803557155U;
unsigned short var_2 = (unsigned short)34951;
unsigned short var_3 = (unsigned short)63625;
unsigned char var_4 = (unsigned char)136;
signed char var_5 = (signed char)-67;
unsigned int var_6 = 806271269U;
unsigned long long int var_7 = 2561354302154521032ULL;
int var_8 = -2131294127;
unsigned char var_10 = (unsigned char)233;
unsigned int var_11 = 84405666U;
unsigned char var_12 = (unsigned char)184;
unsigned short var_14 = (unsigned short)42193;
unsigned char var_15 = (unsigned char)154;
unsigned long long int var_16 = 7997852523012013734ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)41104;
int var_18 = 1159562967;
_Bool var_19 = (_Bool)0;
int var_20 = -605747512;
long long int var_21 = -7193996831422855240LL;
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
