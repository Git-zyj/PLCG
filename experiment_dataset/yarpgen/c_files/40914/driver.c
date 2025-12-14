#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7802976752200722434ULL;
unsigned long long int var_8 = 14556964975116526182ULL;
unsigned long long int var_13 = 15601300098334086744ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
unsigned char var_19 = (unsigned char)153;
unsigned int var_20 = 2420481606U;
int var_21 = -206490690;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
