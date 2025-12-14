#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7081;
unsigned char var_5 = (unsigned char)129;
int zero = 0;
long long int var_10 = 3106825730536805045LL;
long long int var_11 = 6763551754494507147LL;
unsigned short var_12 = (unsigned short)24029;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
