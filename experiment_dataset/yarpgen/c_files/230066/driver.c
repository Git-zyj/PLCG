#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3144443174U;
int var_5 = -1051161581;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)39961;
unsigned int var_10 = 781006875U;
unsigned int var_13 = 4212110804U;
unsigned char var_15 = (unsigned char)168;
int zero = 0;
unsigned char var_16 = (unsigned char)136;
unsigned int var_17 = 2259323952U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
