#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33217;
unsigned int var_3 = 621071983U;
_Bool var_4 = (_Bool)0;
int var_5 = -2026989242;
signed char var_7 = (signed char)-15;
int zero = 0;
unsigned long long int var_10 = 8665234174855469096ULL;
unsigned long long int var_11 = 1861108791640724106ULL;
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
