#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)2775;
short var_7 = (short)-24649;
int zero = 0;
unsigned char var_13 = (unsigned char)203;
unsigned long long int var_14 = 16650311155901397363ULL;
unsigned long long int var_15 = 10891201802962368682ULL;
signed char var_16 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
