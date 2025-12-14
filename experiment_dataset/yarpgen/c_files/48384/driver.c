#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
short var_2 = (short)13847;
int var_3 = -247060045;
unsigned short var_4 = (unsigned short)1989;
short var_5 = (short)20228;
signed char var_6 = (signed char)-47;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 3058302011U;
int zero = 0;
unsigned short var_11 = (unsigned short)59610;
short var_12 = (short)12795;
signed char var_13 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
