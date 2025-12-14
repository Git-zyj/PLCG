#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 309290319U;
unsigned char var_2 = (unsigned char)86;
short var_3 = (short)15015;
int var_4 = -604014263;
int var_5 = -678668942;
unsigned short var_6 = (unsigned short)12623;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)41612;
unsigned short var_10 = (unsigned short)47748;
unsigned char var_11 = (unsigned char)177;
int zero = 0;
unsigned char var_14 = (unsigned char)153;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)234;
void init() {
}

void checksum() {
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
