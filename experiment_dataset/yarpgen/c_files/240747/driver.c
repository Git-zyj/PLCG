#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2737115029U;
unsigned long long int var_2 = 11860462288899135503ULL;
unsigned char var_4 = (unsigned char)241;
unsigned char var_6 = (unsigned char)45;
unsigned long long int var_8 = 12052462454681510774ULL;
unsigned int var_11 = 363551879U;
int zero = 0;
unsigned short var_13 = (unsigned short)40764;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
