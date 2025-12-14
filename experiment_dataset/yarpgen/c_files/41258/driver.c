#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)135;
unsigned char var_4 = (unsigned char)64;
int var_6 = -199343927;
unsigned long long int var_9 = 985809272788442917ULL;
unsigned char var_14 = (unsigned char)161;
unsigned char var_17 = (unsigned char)167;
int zero = 0;
unsigned char var_20 = (unsigned char)239;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1161904224U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
