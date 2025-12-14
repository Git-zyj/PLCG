#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27306;
int var_1 = -497754088;
unsigned char var_2 = (unsigned char)101;
signed char var_3 = (signed char)-96;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 16870697977389016098ULL;
unsigned int var_10 = 2740132140U;
int zero = 0;
unsigned int var_11 = 2470792401U;
int var_12 = -1106761233;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
