#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)13704;
unsigned int var_10 = 2684044652U;
unsigned short var_11 = (unsigned short)45886;
unsigned int var_13 = 455306887U;
int zero = 0;
unsigned short var_17 = (unsigned short)60441;
signed char var_18 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
