#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3571926964U;
unsigned char var_2 = (unsigned char)28;
unsigned long long int var_4 = 15249076299341402582ULL;
unsigned char var_7 = (unsigned char)109;
signed char var_8 = (signed char)75;
unsigned int var_9 = 951589621U;
int zero = 0;
unsigned int var_10 = 73226339U;
unsigned char var_11 = (unsigned char)56;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
