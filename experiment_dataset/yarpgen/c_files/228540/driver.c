#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 271676616;
unsigned short var_1 = (unsigned short)56518;
long long int var_2 = -4980745486750181955LL;
unsigned int var_4 = 3492832268U;
unsigned int var_5 = 3901468471U;
signed char var_8 = (signed char)10;
int zero = 0;
unsigned int var_11 = 2982534950U;
unsigned int var_12 = 1083928764U;
unsigned short var_13 = (unsigned short)16193;
unsigned int var_14 = 2930947979U;
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
