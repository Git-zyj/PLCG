#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42146;
unsigned long long int var_7 = 9448251605712519311ULL;
unsigned short var_8 = (unsigned short)50986;
unsigned int var_10 = 3667173588U;
int zero = 0;
unsigned int var_12 = 3220130621U;
signed char var_13 = (signed char)12;
unsigned long long int var_14 = 6658900487540161584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
