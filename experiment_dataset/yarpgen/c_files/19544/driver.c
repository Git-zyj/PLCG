#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 752686806;
unsigned int var_2 = 3729296253U;
int var_4 = -888325992;
unsigned char var_7 = (unsigned char)24;
int zero = 0;
unsigned int var_12 = 1658745983U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)69;
unsigned int var_15 = 747554231U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
