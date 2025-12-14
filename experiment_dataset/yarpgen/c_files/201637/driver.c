#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3170677248857819057LL;
signed char var_1 = (signed char)-29;
int var_2 = -1867284993;
signed char var_4 = (signed char)-40;
int var_5 = 1028694465;
signed char var_7 = (signed char)76;
signed char var_13 = (signed char)-71;
int var_14 = 1744732213;
unsigned int var_16 = 2797321383U;
unsigned char var_17 = (unsigned char)83;
int zero = 0;
int var_18 = -1913385881;
unsigned long long int var_19 = 14017322748713966831ULL;
short var_20 = (short)19260;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
