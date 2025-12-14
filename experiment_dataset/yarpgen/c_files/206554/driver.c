#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
unsigned int var_3 = 1012239918U;
signed char var_6 = (signed char)-64;
unsigned int var_8 = 642864867U;
int zero = 0;
long long int var_10 = 8464723627778512700LL;
short var_11 = (short)-32552;
unsigned short var_12 = (unsigned short)49553;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
