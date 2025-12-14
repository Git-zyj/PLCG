#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -581121810;
short var_4 = (short)-16511;
short var_5 = (short)8996;
unsigned short var_7 = (unsigned short)14855;
signed char var_11 = (signed char)-113;
int var_12 = -473476376;
int zero = 0;
short var_13 = (short)-26227;
int var_14 = -1446147664;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
