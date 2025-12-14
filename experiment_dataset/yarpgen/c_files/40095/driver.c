#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5744936746276035601ULL;
unsigned char var_5 = (unsigned char)201;
unsigned int var_12 = 3071984327U;
int zero = 0;
unsigned char var_16 = (unsigned char)214;
unsigned char var_17 = (unsigned char)0;
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
