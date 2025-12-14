#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -325618878089314663LL;
long long int var_2 = 2825254152249591242LL;
unsigned int var_6 = 2711180394U;
int var_7 = 486232926;
int zero = 0;
unsigned short var_10 = (unsigned short)56115;
unsigned char var_11 = (unsigned char)38;
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
