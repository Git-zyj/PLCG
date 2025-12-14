#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1304605205U;
unsigned short var_3 = (unsigned short)24007;
unsigned long long int var_6 = 5963020752717920217ULL;
unsigned long long int var_8 = 18171274711656671354ULL;
unsigned long long int var_9 = 7760566274267423689ULL;
unsigned int var_10 = 1696815202U;
short var_11 = (short)-20546;
long long int var_13 = -4911414965199962277LL;
unsigned char var_14 = (unsigned char)3;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = -63313438301471915LL;
signed char var_20 = (signed char)-72;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
