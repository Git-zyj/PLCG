#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3299976590216291264ULL;
_Bool var_2 = (_Bool)1;
signed char var_12 = (signed char)45;
signed char var_15 = (signed char)-108;
unsigned char var_18 = (unsigned char)152;
int zero = 0;
unsigned char var_19 = (unsigned char)124;
unsigned char var_20 = (unsigned char)119;
signed char var_21 = (signed char)-41;
unsigned char var_22 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
