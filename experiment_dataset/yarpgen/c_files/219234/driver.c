#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4805855860365261595ULL;
unsigned char var_8 = (unsigned char)235;
unsigned int var_12 = 4105938223U;
long long int var_15 = 3663168385617823009LL;
int zero = 0;
unsigned short var_20 = (unsigned short)35678;
unsigned short var_21 = (unsigned short)11922;
unsigned short var_22 = (unsigned short)38490;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
