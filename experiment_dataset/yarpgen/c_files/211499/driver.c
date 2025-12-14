#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
unsigned int var_6 = 3341856790U;
unsigned char var_7 = (unsigned char)94;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 7921763813939069265ULL;
int zero = 0;
unsigned int var_14 = 593814894U;
unsigned long long int var_15 = 10808613885663592910ULL;
unsigned char var_16 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
