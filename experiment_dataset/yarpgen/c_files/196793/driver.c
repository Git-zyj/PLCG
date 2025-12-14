#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2807205531U;
unsigned char var_5 = (unsigned char)28;
short var_7 = (short)1845;
short var_8 = (short)-27852;
short var_9 = (short)-26732;
signed char var_10 = (signed char)54;
signed char var_11 = (signed char)97;
long long int var_12 = 6150019411291684822LL;
unsigned int var_13 = 2961701926U;
short var_16 = (short)2197;
int zero = 0;
short var_17 = (short)-802;
unsigned int var_18 = 1733269962U;
signed char var_19 = (signed char)-99;
signed char var_20 = (signed char)-84;
unsigned int var_21 = 4253663481U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
