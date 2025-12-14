#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6640130889890284720LL;
short var_10 = (short)21118;
unsigned short var_11 = (unsigned short)30876;
signed char var_15 = (signed char)61;
int zero = 0;
long long int var_18 = 8913196681065517717LL;
unsigned long long int var_19 = 12719752727454540250ULL;
unsigned short var_20 = (unsigned short)8418;
unsigned char var_21 = (unsigned char)63;
unsigned char var_22 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
