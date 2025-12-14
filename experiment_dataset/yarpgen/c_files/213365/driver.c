#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
int var_3 = 1097388263;
unsigned short var_4 = (unsigned short)61582;
unsigned int var_5 = 2676728478U;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)120;
int var_11 = 111511548;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
