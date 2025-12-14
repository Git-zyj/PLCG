#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
short var_9 = (short)6128;
unsigned char var_10 = (unsigned char)233;
unsigned char var_12 = (unsigned char)87;
unsigned long long int var_13 = 4337754404574196677ULL;
unsigned long long int var_14 = 3267451326941870297ULL;
unsigned long long int var_15 = 1863948244668538161ULL;
int zero = 0;
unsigned long long int var_18 = 15845657600200134245ULL;
unsigned long long int var_19 = 4709785076082280137ULL;
void init() {
}

void checksum() {
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
