#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 14712267688329578265ULL;
unsigned int var_4 = 1900579224U;
unsigned int var_8 = 3612312154U;
int zero = 0;
unsigned char var_14 = (unsigned char)111;
unsigned char var_15 = (unsigned char)162;
signed char var_16 = (signed char)-123;
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
