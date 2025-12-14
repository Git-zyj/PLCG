#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8844;
signed char var_4 = (signed char)-15;
int var_7 = -36776038;
signed char var_14 = (signed char)87;
unsigned char var_15 = (unsigned char)93;
long long int var_16 = 1261557602724318283LL;
int zero = 0;
signed char var_18 = (signed char)-17;
short var_19 = (short)9387;
unsigned short var_20 = (unsigned short)10778;
signed char var_21 = (signed char)-1;
void init() {
}

void checksum() {
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
