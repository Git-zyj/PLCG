#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52858;
signed char var_5 = (signed char)17;
unsigned short var_9 = (unsigned short)13104;
unsigned short var_10 = (unsigned short)8258;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13687767292486550006ULL;
unsigned int var_17 = 1970822861U;
int var_18 = -692225267;
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
