#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)50;
int var_6 = -1169014134;
unsigned int var_7 = 3079771285U;
short var_11 = (short)26546;
short var_16 = (short)-3724;
int zero = 0;
unsigned int var_19 = 326345599U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1399051760U;
int var_22 = -117401121;
unsigned char var_23 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
