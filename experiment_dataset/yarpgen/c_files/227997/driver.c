#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)250;
unsigned long long int var_3 = 666295713086414021ULL;
unsigned long long int var_4 = 7643553358093748256ULL;
signed char var_9 = (signed char)(-127 - 1);
unsigned long long int var_11 = 2755641377128766872ULL;
unsigned long long int var_12 = 6843181197181348473ULL;
int zero = 0;
signed char var_14 = (signed char)-86;
signed char var_15 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
