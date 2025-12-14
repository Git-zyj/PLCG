#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1033027964U;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)58270;
long long int var_11 = 8334900213249565708LL;
int zero = 0;
unsigned short var_12 = (unsigned short)45798;
unsigned long long int var_13 = 1709419857791931365ULL;
_Bool var_14 = (_Bool)0;
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
