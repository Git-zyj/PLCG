#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64500;
int var_3 = 167472437;
signed char var_7 = (signed char)-66;
signed char var_9 = (signed char)-14;
unsigned long long int var_11 = 3632008966853191052ULL;
int zero = 0;
short var_20 = (short)-9147;
long long int var_21 = -8850967671435765136LL;
unsigned char var_22 = (unsigned char)143;
unsigned long long int var_23 = 6695195131596802413ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
