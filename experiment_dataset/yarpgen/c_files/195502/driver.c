#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7435;
unsigned char var_6 = (unsigned char)149;
unsigned char var_7 = (unsigned char)255;
signed char var_10 = (signed char)11;
int var_17 = -109907622;
int zero = 0;
signed char var_19 = (signed char)-3;
unsigned long long int var_20 = 10147352752320063675ULL;
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
