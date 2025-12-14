#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)174;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 4137581560U;
unsigned char var_10 = (unsigned char)98;
int zero = 0;
unsigned int var_12 = 35960844U;
unsigned char var_13 = (unsigned char)101;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)97;
void init() {
}

void checksum() {
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
