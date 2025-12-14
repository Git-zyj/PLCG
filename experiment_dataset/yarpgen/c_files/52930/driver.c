#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 457789852;
_Bool var_2 = (_Bool)1;
unsigned short var_8 = (unsigned short)14871;
signed char var_17 = (signed char)5;
int zero = 0;
short var_20 = (short)17355;
unsigned char var_21 = (unsigned char)3;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
