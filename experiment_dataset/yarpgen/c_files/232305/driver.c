#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 767437535655853093LL;
short var_3 = (short)2628;
unsigned char var_5 = (unsigned char)149;
short var_9 = (short)-7074;
unsigned short var_12 = (unsigned short)14829;
signed char var_13 = (signed char)-120;
int var_14 = -781785155;
int zero = 0;
unsigned int var_16 = 4196799089U;
unsigned short var_17 = (unsigned short)28150;
signed char var_18 = (signed char)-18;
short var_19 = (short)1097;
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
