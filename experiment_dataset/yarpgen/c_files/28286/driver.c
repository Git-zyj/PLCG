#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21582;
signed char var_6 = (signed char)55;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)166;
unsigned long long int var_11 = 16803718795175156162ULL;
unsigned char var_12 = (unsigned char)144;
long long int var_14 = 4735083729636760094LL;
unsigned char var_16 = (unsigned char)92;
int zero = 0;
signed char var_17 = (signed char)-26;
unsigned int var_18 = 740969554U;
void init() {
}

void checksum() {
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
