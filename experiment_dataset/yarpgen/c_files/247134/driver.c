#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2091654963;
long long int var_6 = 2230348420902605196LL;
short var_9 = (short)16675;
signed char var_10 = (signed char)-7;
unsigned char var_12 = (unsigned char)65;
long long int var_14 = -3941829799160968138LL;
int zero = 0;
unsigned int var_17 = 3993399000U;
unsigned char var_18 = (unsigned char)158;
unsigned char var_19 = (unsigned char)101;
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
