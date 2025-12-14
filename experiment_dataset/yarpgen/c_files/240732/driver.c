#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1304474707;
_Bool var_2 = (_Bool)0;
unsigned char var_8 = (unsigned char)28;
unsigned char var_10 = (unsigned char)80;
int zero = 0;
int var_11 = 1472082414;
unsigned long long int var_12 = 1224592992634264968ULL;
int var_13 = 1761797393;
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
