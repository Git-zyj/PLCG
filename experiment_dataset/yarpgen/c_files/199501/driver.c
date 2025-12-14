#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4246393992U;
signed char var_3 = (signed char)-78;
unsigned int var_5 = 3571400044U;
unsigned short var_7 = (unsigned short)11744;
signed char var_11 = (signed char)1;
long long int var_12 = -3229910013007634670LL;
int zero = 0;
int var_13 = -35656506;
long long int var_14 = -7021793079942339944LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
