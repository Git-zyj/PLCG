#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)35;
short var_6 = (short)-2350;
short var_7 = (short)-15929;
unsigned int var_11 = 3507187145U;
unsigned short var_18 = (unsigned short)13120;
int zero = 0;
unsigned long long int var_19 = 15646450631368980074ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1774473026258129132LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)55565;
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
