#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
short var_2 = (short)13293;
unsigned short var_3 = (unsigned short)5780;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-61;
unsigned short var_11 = (unsigned short)28877;
int zero = 0;
unsigned long long int var_13 = 6052097525193791383ULL;
unsigned long long int var_14 = 16411358899972138470ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
