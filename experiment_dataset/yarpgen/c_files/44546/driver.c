#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)11141;
int var_11 = 1173303289;
int var_14 = 248742239;
int var_19 = 2097532582;
int zero = 0;
int var_20 = 1190824610;
long long int var_21 = -4400901056279635619LL;
unsigned int var_22 = 1658754124U;
int var_23 = -1452936339;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
