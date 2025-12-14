#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2645374064U;
unsigned int var_5 = 2284548867U;
unsigned int var_6 = 3127659430U;
int var_7 = -1195574609;
signed char var_12 = (signed char)-43;
signed char var_14 = (signed char)116;
unsigned int var_15 = 4152125840U;
int zero = 0;
unsigned int var_16 = 1617594U;
unsigned char var_17 = (unsigned char)250;
unsigned char var_18 = (unsigned char)181;
signed char var_19 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
