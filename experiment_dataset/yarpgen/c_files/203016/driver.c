#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10876315215270036486ULL;
short var_1 = (short)14873;
_Bool var_5 = (_Bool)1;
unsigned char var_11 = (unsigned char)32;
unsigned char var_12 = (unsigned char)132;
signed char var_13 = (signed char)-101;
int var_14 = 87049004;
int zero = 0;
int var_15 = -383177746;
_Bool var_16 = (_Bool)1;
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
