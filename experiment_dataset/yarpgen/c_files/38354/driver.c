#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2300510836470297428LL;
long long int var_5 = 7851393450504931287LL;
long long int var_6 = -9111934976186575457LL;
signed char var_8 = (signed char)3;
unsigned char var_15 = (unsigned char)163;
unsigned char var_16 = (unsigned char)105;
long long int var_17 = -3731034064108355909LL;
int zero = 0;
long long int var_19 = -8694456309681257976LL;
long long int var_20 = -3336658166350303576LL;
signed char var_21 = (signed char)126;
signed char var_22 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
