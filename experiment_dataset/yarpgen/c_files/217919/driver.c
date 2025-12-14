#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)41;
unsigned int var_5 = 1499888493U;
unsigned int var_7 = 2744963912U;
unsigned int var_8 = 2246142775U;
int var_9 = 1529799075;
unsigned long long int var_11 = 14271318578738038714ULL;
unsigned char var_12 = (unsigned char)6;
long long int var_13 = 1506370167239736417LL;
int zero = 0;
unsigned int var_18 = 2094933144U;
unsigned char var_19 = (unsigned char)119;
int var_20 = -726942274;
signed char var_21 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
