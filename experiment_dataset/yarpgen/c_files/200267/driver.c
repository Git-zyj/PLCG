#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)159;
unsigned long long int var_13 = 8573530971511505272ULL;
unsigned char var_16 = (unsigned char)13;
int zero = 0;
unsigned int var_19 = 2728425495U;
int var_20 = -44838294;
short var_21 = (short)31619;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
