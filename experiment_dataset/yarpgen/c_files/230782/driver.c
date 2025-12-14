#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7056;
int var_1 = -1783397123;
unsigned char var_2 = (unsigned char)135;
short var_4 = (short)-5041;
short var_5 = (short)1844;
signed char var_6 = (signed char)119;
signed char var_9 = (signed char)75;
short var_11 = (short)18286;
unsigned int var_13 = 1634719650U;
int zero = 0;
long long int var_14 = 1274263795653894649LL;
unsigned long long int var_15 = 11765913751697564418ULL;
unsigned char var_16 = (unsigned char)137;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
