#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -900972583;
unsigned short var_6 = (unsigned short)12258;
int var_7 = -1386924379;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 281079821U;
unsigned long long int var_11 = 13933633213133456277ULL;
unsigned char var_12 = (unsigned char)187;
int var_13 = -1138216011;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
