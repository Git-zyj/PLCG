#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2829;
unsigned long long int var_4 = 2272437298637760876ULL;
unsigned char var_7 = (unsigned char)223;
short var_9 = (short)15303;
signed char var_10 = (signed char)-116;
int zero = 0;
short var_11 = (short)13266;
unsigned long long int var_12 = 4273812531567979285ULL;
unsigned short var_13 = (unsigned short)15094;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
