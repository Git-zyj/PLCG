#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11853135876820170821ULL;
unsigned int var_7 = 461778646U;
int var_13 = 945905812;
unsigned char var_14 = (unsigned char)60;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
unsigned short var_20 = (unsigned short)19855;
short var_21 = (short)21077;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
