#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22279;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1664888328U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1963091389U;
unsigned long long int var_12 = 14553637333790238402ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
