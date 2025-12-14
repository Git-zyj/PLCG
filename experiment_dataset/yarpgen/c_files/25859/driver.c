#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1680770333;
int var_5 = 729813682;
int var_8 = -1908999944;
int zero = 0;
long long int var_10 = 2713917657303541621LL;
long long int var_11 = 2719970244652922482LL;
signed char var_12 = (signed char)126;
int var_13 = 502935899;
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
