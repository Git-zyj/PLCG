#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)231;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)89;
signed char var_4 = (signed char)66;
short var_6 = (short)21405;
short var_7 = (short)28990;
unsigned int var_8 = 296292780U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 11518768740308455137ULL;
unsigned long long int var_12 = 10866008495939194742ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)66;
unsigned long long int var_14 = 13220313722354052117ULL;
unsigned short var_15 = (unsigned short)29793;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
