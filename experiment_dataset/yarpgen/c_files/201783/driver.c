#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3312986013598250249LL;
unsigned int var_2 = 93855843U;
long long int var_4 = -7539338785175974633LL;
unsigned char var_5 = (unsigned char)229;
_Bool var_8 = (_Bool)1;
long long int var_10 = -491542108233223876LL;
unsigned int var_11 = 884504325U;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_17 = 2705166280493623675LL;
long long int var_18 = -6192124097770274077LL;
unsigned char var_19 = (unsigned char)191;
unsigned char var_20 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
