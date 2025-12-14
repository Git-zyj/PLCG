#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
unsigned char var_5 = (unsigned char)185;
long long int var_6 = 2131493287589111477LL;
unsigned long long int var_10 = 3639508907659180162ULL;
unsigned int var_13 = 149467728U;
int zero = 0;
unsigned int var_14 = 2222841737U;
int var_15 = -8026176;
unsigned char var_16 = (unsigned char)55;
void init() {
}

void checksum() {
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
