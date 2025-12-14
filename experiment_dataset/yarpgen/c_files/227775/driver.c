#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31234;
unsigned int var_4 = 2190005592U;
int var_12 = 33680955;
signed char var_16 = (signed char)-49;
signed char var_17 = (signed char)-64;
int zero = 0;
unsigned short var_19 = (unsigned short)3832;
unsigned short var_20 = (unsigned short)24236;
unsigned char var_21 = (unsigned char)182;
unsigned long long int var_22 = 961440123122852288ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
