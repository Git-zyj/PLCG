#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5080759570828422285ULL;
short var_1 = (short)4804;
long long int var_5 = -7947792701279752069LL;
signed char var_6 = (signed char)0;
unsigned int var_8 = 2776904633U;
unsigned int var_9 = 1635636881U;
unsigned int var_11 = 1253132198U;
int var_12 = -1277223737;
long long int var_13 = -8804648504992081093LL;
unsigned int var_15 = 1889780416U;
int zero = 0;
signed char var_17 = (signed char)-44;
unsigned char var_18 = (unsigned char)130;
unsigned int var_19 = 3582465736U;
void init() {
}

void checksum() {
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
