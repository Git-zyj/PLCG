#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1123;
_Bool var_6 = (_Bool)0;
short var_7 = (short)29032;
unsigned long long int var_8 = 2103798669384270402ULL;
unsigned short var_11 = (unsigned short)4195;
unsigned short var_15 = (unsigned short)7069;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)5064;
unsigned char var_18 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
