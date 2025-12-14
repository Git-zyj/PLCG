#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4187799645U;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)181;
unsigned char var_14 = (unsigned char)35;
unsigned char var_15 = (unsigned char)153;
unsigned int var_16 = 3180382819U;
int zero = 0;
unsigned char var_17 = (unsigned char)250;
unsigned int var_18 = 1090038233U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
