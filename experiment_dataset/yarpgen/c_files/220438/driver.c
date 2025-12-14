#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1655062568;
long long int var_2 = -3076165103672108855LL;
unsigned int var_4 = 4093655860U;
unsigned short var_8 = (unsigned short)17757;
unsigned long long int var_10 = 4665548753643184566ULL;
int zero = 0;
int var_12 = -76245645;
unsigned short var_13 = (unsigned short)27524;
void init() {
}

void checksum() {
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
