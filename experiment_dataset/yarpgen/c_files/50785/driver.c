#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37166;
unsigned char var_4 = (unsigned char)173;
unsigned int var_8 = 3425048097U;
unsigned long long int var_15 = 4064049011756870452ULL;
unsigned int var_16 = 4080025796U;
unsigned int var_18 = 3798268931U;
int zero = 0;
unsigned char var_20 = (unsigned char)236;
unsigned long long int var_21 = 10518335587587687089ULL;
unsigned char var_22 = (unsigned char)78;
unsigned int var_23 = 2189982269U;
unsigned int var_24 = 1422468279U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
