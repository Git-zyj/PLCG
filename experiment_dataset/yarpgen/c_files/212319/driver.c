#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned int var_11 = 2462376944U;
unsigned int var_16 = 1166173746U;
int zero = 0;
unsigned long long int var_17 = 1859637202212637245ULL;
long long int var_18 = -4387548457876978964LL;
signed char var_19 = (signed char)-123;
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
