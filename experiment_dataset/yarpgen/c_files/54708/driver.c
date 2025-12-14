#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7938;
long long int var_3 = -2891292478051157021LL;
int var_5 = -1895536579;
unsigned short var_9 = (unsigned short)41959;
long long int var_13 = 8528317024116289727LL;
int zero = 0;
int var_14 = -1010485519;
unsigned short var_15 = (unsigned short)40038;
long long int var_16 = -3587535951392877422LL;
void init() {
}

void checksum() {
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
