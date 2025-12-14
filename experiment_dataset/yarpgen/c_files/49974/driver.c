#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)30;
signed char var_3 = (signed char)119;
short var_4 = (short)-9766;
signed char var_5 = (signed char)61;
int var_6 = 438823777;
short var_7 = (short)-11025;
signed char var_8 = (signed char)-108;
short var_11 = (short)-16154;
signed char var_12 = (signed char)127;
int var_13 = -1462937726;
signed char var_14 = (signed char)110;
int zero = 0;
int var_15 = 1904293060;
signed char var_16 = (signed char)5;
short var_17 = (short)-6978;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
