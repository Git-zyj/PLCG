#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1279424938;
unsigned char var_4 = (unsigned char)132;
short var_5 = (short)7354;
int zero = 0;
unsigned long long int var_14 = 5779076963628107469ULL;
signed char var_15 = (signed char)9;
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
