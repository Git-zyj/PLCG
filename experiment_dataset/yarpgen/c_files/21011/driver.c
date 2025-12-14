#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6192820791164842289LL;
unsigned char var_3 = (unsigned char)0;
_Bool var_11 = (_Bool)0;
unsigned char var_15 = (unsigned char)14;
unsigned int var_17 = 3116680700U;
int zero = 0;
int var_18 = 1447945091;
unsigned int var_19 = 3094143776U;
unsigned long long int var_20 = 14544616461893769795ULL;
unsigned long long int var_21 = 15572956457503296034ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
