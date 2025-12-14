#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14187;
unsigned short var_2 = (unsigned short)34053;
unsigned int var_3 = 3585680580U;
long long int var_10 = -5726777942446272474LL;
unsigned long long int var_12 = 17887191431079978367ULL;
unsigned int var_16 = 2488487205U;
signed char var_18 = (signed char)121;
int zero = 0;
signed char var_19 = (signed char)-5;
unsigned long long int var_20 = 7881685399583586848ULL;
signed char var_21 = (signed char)-72;
void init() {
}

void checksum() {
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
