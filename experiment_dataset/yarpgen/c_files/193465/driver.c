#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)11;
unsigned long long int var_3 = 15415356353657717277ULL;
unsigned int var_4 = 2094146243U;
unsigned long long int var_5 = 2586239014009257095ULL;
unsigned short var_7 = (unsigned short)18473;
int var_8 = 418564091;
int zero = 0;
unsigned short var_12 = (unsigned short)9943;
long long int var_13 = -1895442536778432292LL;
short var_14 = (short)-6709;
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
