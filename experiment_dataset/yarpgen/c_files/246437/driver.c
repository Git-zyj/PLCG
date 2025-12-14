#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2109088092;
unsigned short var_4 = (unsigned short)50346;
unsigned short var_8 = (unsigned short)11491;
int zero = 0;
unsigned int var_10 = 1168949274U;
unsigned int var_11 = 1256322170U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
