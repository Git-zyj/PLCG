#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9936;
signed char var_1 = (signed char)-55;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2248670316U;
unsigned int var_8 = 3523728393U;
unsigned char var_9 = (unsigned char)118;
signed char var_10 = (signed char)-15;
unsigned int var_11 = 3580292721U;
unsigned int var_13 = 3259151482U;
int zero = 0;
signed char var_16 = (signed char)30;
unsigned int var_17 = 20884973U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
