#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-20255;
int var_11 = 2098358472;
unsigned char var_16 = (unsigned char)61;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14062471023934984188ULL;
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
