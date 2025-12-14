#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-90;
unsigned long long int var_2 = 11578538461132442353ULL;
unsigned short var_4 = (unsigned short)63836;
unsigned short var_5 = (unsigned short)32986;
long long int var_6 = 9185944869137505523LL;
unsigned int var_7 = 2537438906U;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-93;
unsigned long long int var_11 = 8220690705931045092ULL;
int zero = 0;
short var_12 = (short)-7625;
unsigned char var_13 = (unsigned char)202;
unsigned short var_14 = (unsigned short)25008;
short var_15 = (short)8732;
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
