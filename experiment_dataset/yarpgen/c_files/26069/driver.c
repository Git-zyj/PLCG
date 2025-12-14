#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1595759716;
unsigned char var_4 = (unsigned char)97;
unsigned long long int var_5 = 16609836249235065277ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 17492430256897442817ULL;
unsigned long long int var_14 = 5678669174575572944ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
