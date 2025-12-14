#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1877742960U;
unsigned int var_6 = 4204063620U;
short var_10 = (short)-29814;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)8723;
int var_14 = -1462942605;
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
