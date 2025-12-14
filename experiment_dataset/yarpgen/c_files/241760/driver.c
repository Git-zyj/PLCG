#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1962565641934291125LL;
unsigned int var_5 = 2290732732U;
int var_6 = -1726899464;
unsigned short var_9 = (unsigned short)20721;
signed char var_11 = (signed char)11;
int zero = 0;
signed char var_12 = (signed char)-123;
signed char var_13 = (signed char)-8;
int var_14 = -401301848;
unsigned short var_15 = (unsigned short)52328;
unsigned short var_16 = (unsigned short)11087;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
