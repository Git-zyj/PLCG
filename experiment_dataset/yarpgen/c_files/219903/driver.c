#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -674101147;
unsigned short var_6 = (unsigned short)34158;
unsigned long long int var_8 = 2852500983735991905ULL;
signed char var_9 = (signed char)109;
int var_11 = 504514686;
unsigned char var_13 = (unsigned char)66;
unsigned short var_18 = (unsigned short)43722;
int zero = 0;
unsigned short var_20 = (unsigned short)30684;
short var_21 = (short)-27404;
short var_22 = (short)-28539;
int var_23 = -1562255485;
int var_24 = -2139001683;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
