#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)188;
unsigned long long int var_5 = 12161097862494556715ULL;
unsigned int var_7 = 2337057650U;
unsigned int var_12 = 268149236U;
short var_13 = (short)13161;
signed char var_14 = (signed char)75;
int zero = 0;
short var_15 = (short)21915;
unsigned long long int var_16 = 13007219473813582337ULL;
signed char var_17 = (signed char)97;
signed char var_18 = (signed char)-81;
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
