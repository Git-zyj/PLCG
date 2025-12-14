#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)202;
unsigned long long int var_4 = 17906552771530811606ULL;
unsigned long long int var_11 = 15245292267065917082ULL;
unsigned long long int var_14 = 12410048691360719647ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
unsigned char var_16 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
