#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6663506163900984643ULL;
unsigned short var_5 = (unsigned short)17504;
unsigned short var_7 = (unsigned short)47877;
unsigned long long int var_8 = 10584779967997609317ULL;
int zero = 0;
long long int var_10 = -3537228852703056108LL;
long long int var_11 = 7380799003575696851LL;
unsigned long long int var_12 = 3372506461264022633ULL;
unsigned short var_13 = (unsigned short)12191;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
