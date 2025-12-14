#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
unsigned int var_1 = 3767118475U;
int var_3 = 828029212;
unsigned short var_4 = (unsigned short)59452;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-15024;
unsigned short var_11 = (unsigned short)46703;
signed char var_14 = (signed char)18;
unsigned int var_15 = 3698302544U;
int zero = 0;
short var_16 = (short)31279;
unsigned char var_17 = (unsigned char)147;
signed char var_18 = (signed char)-40;
long long int var_19 = -7035045026364378182LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
