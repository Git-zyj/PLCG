#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)228;
unsigned char var_2 = (unsigned char)123;
unsigned int var_3 = 443060798U;
long long int var_9 = 6884936187758014167LL;
int zero = 0;
short var_12 = (short)-22284;
unsigned int var_13 = 2344034373U;
int var_14 = 397752824;
long long int var_15 = 7468218992913632034LL;
unsigned char var_16 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
