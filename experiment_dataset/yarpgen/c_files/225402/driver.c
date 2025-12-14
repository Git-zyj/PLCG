#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2911015977U;
signed char var_1 = (signed char)-85;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)205;
unsigned char var_5 = (unsigned char)158;
short var_7 = (short)6709;
short var_8 = (short)14115;
short var_9 = (short)16617;
int zero = 0;
int var_11 = 2020934336;
unsigned char var_12 = (unsigned char)150;
unsigned long long int var_13 = 10274071692869825366ULL;
int var_14 = -56790884;
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
