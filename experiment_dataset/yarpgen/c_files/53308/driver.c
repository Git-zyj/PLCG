#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2846223031U;
long long int var_1 = 7980858296968274581LL;
unsigned int var_3 = 1692322118U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 3338610724021418996ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)56258;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)11068;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
