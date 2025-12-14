#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1497300311;
unsigned int var_5 = 1020108121U;
signed char var_7 = (signed char)15;
unsigned short var_10 = (unsigned short)45048;
unsigned char var_11 = (unsigned char)139;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 2582376900U;
unsigned char var_18 = (unsigned char)255;
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
