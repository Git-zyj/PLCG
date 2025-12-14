#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-112;
unsigned char var_4 = (unsigned char)129;
unsigned char var_8 = (unsigned char)229;
int zero = 0;
unsigned char var_11 = (unsigned char)168;
unsigned int var_12 = 3385195808U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
