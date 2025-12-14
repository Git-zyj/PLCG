#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3125687037150867369LL;
signed char var_5 = (signed char)-27;
unsigned int var_6 = 2559358316U;
int zero = 0;
unsigned char var_19 = (unsigned char)19;
unsigned char var_20 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
