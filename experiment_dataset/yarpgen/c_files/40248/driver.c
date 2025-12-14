#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1781445063U;
unsigned int var_3 = 4261064677U;
signed char var_4 = (signed char)95;
long long int var_5 = -680211233063199346LL;
unsigned char var_7 = (unsigned char)254;
int zero = 0;
int var_10 = -777387000;
unsigned int var_11 = 144646544U;
short var_12 = (short)12762;
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
