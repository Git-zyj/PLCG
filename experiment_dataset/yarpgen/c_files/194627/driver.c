#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1378665987;
unsigned char var_3 = (unsigned char)103;
unsigned int var_5 = 1648402582U;
int var_6 = -1709826964;
short var_7 = (short)32153;
int var_10 = -1443801675;
unsigned char var_12 = (unsigned char)114;
int zero = 0;
unsigned long long int var_13 = 14204101203908587934ULL;
int var_14 = -545026909;
unsigned char var_15 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
