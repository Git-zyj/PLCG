#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32175;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2495254657U;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)11;
signed char var_10 = (signed char)16;
int zero = 0;
unsigned char var_12 = (unsigned char)36;
unsigned short var_13 = (unsigned short)21425;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
