#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7618633873637783726LL;
int var_1 = 1798219508;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)43;
short var_8 = (short)-25333;
signed char var_10 = (signed char)-56;
int zero = 0;
unsigned long long int var_11 = 6605611828176016804ULL;
unsigned long long int var_12 = 16487322183567952346ULL;
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
