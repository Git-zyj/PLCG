#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63928;
int var_1 = 1533670850;
short var_2 = (short)-10590;
signed char var_3 = (signed char)9;
unsigned char var_4 = (unsigned char)168;
short var_5 = (short)4809;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-81;
unsigned short var_11 = (unsigned short)13393;
int var_12 = -273059807;
int zero = 0;
short var_13 = (short)18783;
unsigned long long int var_14 = 3783290744445227551ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
