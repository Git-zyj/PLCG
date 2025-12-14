#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1222244102523403216LL;
signed char var_1 = (signed char)86;
int var_6 = 664886356;
long long int var_7 = -4302838374988465723LL;
int zero = 0;
unsigned char var_10 = (unsigned char)101;
int var_11 = -669454422;
signed char var_12 = (signed char)50;
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
