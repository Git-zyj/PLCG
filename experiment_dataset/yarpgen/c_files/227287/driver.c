#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 502210615U;
int var_3 = 1233284067;
int var_5 = -1179957391;
unsigned int var_6 = 3789667489U;
short var_7 = (short)29122;
unsigned char var_9 = (unsigned char)46;
signed char var_10 = (signed char)-26;
int var_11 = 1558270902;
unsigned short var_12 = (unsigned short)55941;
signed char var_13 = (signed char)71;
int var_14 = 825086492;
int zero = 0;
signed char var_15 = (signed char)64;
unsigned long long int var_16 = 17525063514866162440ULL;
signed char var_17 = (signed char)-62;
int var_18 = -1855088911;
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
