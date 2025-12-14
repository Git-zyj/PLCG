#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1222526938U;
unsigned char var_5 = (unsigned char)31;
long long int var_7 = 4651071264281319014LL;
int zero = 0;
unsigned char var_11 = (unsigned char)13;
signed char var_12 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
