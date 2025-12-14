#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
unsigned int var_3 = 110980904U;
short var_4 = (short)22768;
unsigned int var_8 = 3781942166U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
