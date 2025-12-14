#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1586645214U;
unsigned long long int var_2 = 4295147151026048503ULL;
unsigned char var_3 = (unsigned char)203;
signed char var_5 = (signed char)98;
short var_6 = (short)-9663;
unsigned char var_8 = (unsigned char)54;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 2079696069;
int var_13 = 1436756317;
signed char var_14 = (signed char)13;
unsigned long long int var_15 = 13357403329906291855ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
