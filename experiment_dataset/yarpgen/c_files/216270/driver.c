#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42248;
unsigned long long int var_5 = 9489949894073320931ULL;
unsigned short var_7 = (unsigned short)42354;
short var_11 = (short)17545;
signed char var_12 = (signed char)94;
int zero = 0;
signed char var_15 = (signed char)-87;
unsigned short var_16 = (unsigned short)44292;
void init() {
}

void checksum() {
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
