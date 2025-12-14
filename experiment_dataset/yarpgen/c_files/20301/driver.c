#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
short var_1 = (short)10169;
long long int var_3 = 7448979495157663287LL;
int var_6 = -1414832165;
signed char var_9 = (signed char)41;
signed char var_10 = (signed char)90;
int zero = 0;
unsigned int var_11 = 3731087236U;
unsigned long long int var_12 = 6174011504435662463ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
