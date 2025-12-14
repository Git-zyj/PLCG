#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)219;
unsigned long long int var_12 = 15951770641720511211ULL;
unsigned int var_17 = 2244805724U;
unsigned int var_18 = 620915470U;
int zero = 0;
unsigned char var_19 = (unsigned char)201;
short var_20 = (short)-2119;
unsigned char var_21 = (unsigned char)210;
unsigned char var_22 = (unsigned char)13;
unsigned long long int var_23 = 8916566330569831170ULL;
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
