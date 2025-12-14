#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25530;
int var_2 = 647640423;
unsigned int var_3 = 3657691568U;
int var_4 = 1116199727;
unsigned char var_5 = (unsigned char)233;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)23169;
short var_12 = (short)-7654;
unsigned short var_14 = (unsigned short)64679;
unsigned int var_15 = 354274640U;
int zero = 0;
unsigned int var_19 = 1368237806U;
signed char var_20 = (signed char)-90;
unsigned char var_21 = (unsigned char)161;
void init() {
}

void checksum() {
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
