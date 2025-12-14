#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 532231622U;
unsigned int var_1 = 2269197029U;
unsigned long long int var_4 = 5263611816752169907ULL;
unsigned int var_7 = 241336140U;
long long int var_8 = -3050397520208722379LL;
unsigned long long int var_11 = 5678009676123148089ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)17049;
int zero = 0;
unsigned int var_18 = 875603614U;
unsigned long long int var_19 = 12625359983542724017ULL;
unsigned char var_20 = (unsigned char)10;
long long int var_21 = -5933290305631300364LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
