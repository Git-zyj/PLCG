#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4102242271U;
unsigned long long int var_3 = 416651917359572005ULL;
signed char var_4 = (signed char)-63;
signed char var_5 = (signed char)40;
unsigned char var_7 = (unsigned char)179;
long long int var_8 = -6260384514072947733LL;
short var_10 = (short)-31972;
short var_11 = (short)-15153;
unsigned long long int var_12 = 603035771385302957ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int var_15 = 105498836;
void init() {
}

void checksum() {
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
