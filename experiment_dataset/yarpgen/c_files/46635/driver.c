#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1162145656774627407ULL;
unsigned char var_3 = (unsigned char)247;
signed char var_5 = (signed char)-84;
unsigned char var_6 = (unsigned char)36;
int zero = 0;
long long int var_10 = 1069241620900975914LL;
unsigned long long int var_11 = 2977494749617415882ULL;
short var_12 = (short)1220;
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
