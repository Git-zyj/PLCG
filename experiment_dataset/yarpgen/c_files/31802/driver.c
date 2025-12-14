#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3281490761U;
unsigned short var_1 = (unsigned short)14883;
int var_2 = -102066448;
int var_3 = 1152046472;
signed char var_4 = (signed char)69;
unsigned short var_6 = (unsigned short)57620;
unsigned char var_7 = (unsigned char)55;
signed char var_8 = (signed char)-74;
signed char var_9 = (signed char)116;
unsigned char var_11 = (unsigned char)213;
unsigned char var_12 = (unsigned char)16;
unsigned int var_13 = 3685225242U;
unsigned char var_14 = (unsigned char)59;
unsigned int var_15 = 2728511243U;
long long int var_17 = 301821998538862552LL;
unsigned long long int var_18 = 6928331754584514397ULL;
int zero = 0;
signed char var_20 = (signed char)-90;
int var_21 = 1949526186;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
