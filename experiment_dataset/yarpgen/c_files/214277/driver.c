#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6305257159726089280ULL;
short var_4 = (short)-32066;
short var_7 = (short)309;
unsigned char var_8 = (unsigned char)8;
unsigned long long int var_11 = 13990016166273323612ULL;
int zero = 0;
unsigned int var_12 = 4030112729U;
unsigned int var_13 = 2506347970U;
void init() {
}

void checksum() {
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
