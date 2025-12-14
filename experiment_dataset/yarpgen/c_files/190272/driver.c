#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)130;
_Bool var_5 = (_Bool)1;
short var_8 = (short)3908;
unsigned char var_10 = (unsigned char)116;
int zero = 0;
short var_11 = (short)4603;
int var_12 = 1339107911;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
