#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = -6376596429643625206LL;
int var_6 = 431218041;
unsigned short var_8 = (unsigned short)19972;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 1903271772554122145ULL;
unsigned short var_15 = (unsigned short)21062;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
