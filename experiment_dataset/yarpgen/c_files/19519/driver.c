#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32902;
signed char var_2 = (signed char)13;
unsigned int var_4 = 3237688554U;
signed char var_5 = (signed char)-123;
signed char var_6 = (signed char)11;
short var_7 = (short)30079;
unsigned short var_8 = (unsigned short)12696;
int zero = 0;
short var_10 = (short)21169;
int var_11 = 433863161;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
