#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3867801148U;
unsigned short var_13 = (unsigned short)36476;
int zero = 0;
signed char var_15 = (signed char)23;
unsigned int var_16 = 1290557089U;
unsigned long long int var_17 = 12835406342109839101ULL;
unsigned char var_18 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
