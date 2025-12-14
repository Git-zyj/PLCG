#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned long long int var_1 = 14509145211367084011ULL;
unsigned int var_4 = 1963137011U;
long long int var_7 = -3091499147787998142LL;
long long int var_11 = 3622496810926867666LL;
signed char var_14 = (signed char)68;
int zero = 0;
unsigned long long int var_16 = 543273287070900244ULL;
unsigned long long int var_17 = 14952968493747602773ULL;
short var_18 = (short)17044;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
