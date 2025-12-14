#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1062966126;
unsigned long long int var_2 = 18185205534729643949ULL;
unsigned short var_3 = (unsigned short)35132;
_Bool var_5 = (_Bool)0;
unsigned char var_11 = (unsigned char)213;
int zero = 0;
unsigned short var_12 = (unsigned short)51030;
signed char var_13 = (signed char)99;
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
