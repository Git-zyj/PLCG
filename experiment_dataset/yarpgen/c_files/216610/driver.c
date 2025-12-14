#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3347806270819038747LL;
unsigned char var_1 = (unsigned char)234;
int var_3 = 600391444;
unsigned short var_5 = (unsigned short)42255;
unsigned int var_6 = 1103856922U;
unsigned int var_10 = 1098802454U;
int zero = 0;
unsigned long long int var_11 = 17977320215755064495ULL;
unsigned char var_12 = (unsigned char)174;
long long int var_13 = -8816167401618001038LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
