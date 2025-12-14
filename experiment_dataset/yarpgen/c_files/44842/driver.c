#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)93;
unsigned int var_13 = 2011318857U;
unsigned char var_16 = (unsigned char)227;
unsigned short var_17 = (unsigned short)41672;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 356963033;
unsigned long long int var_20 = 6650071004534642627ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
