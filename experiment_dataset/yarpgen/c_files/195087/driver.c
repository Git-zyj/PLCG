#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3590326782520420909LL;
unsigned char var_3 = (unsigned char)191;
unsigned char var_7 = (unsigned char)52;
unsigned int var_8 = 3627737241U;
long long int var_9 = -6334455301099259961LL;
int zero = 0;
int var_10 = 186284478;
short var_11 = (short)-28025;
unsigned short var_12 = (unsigned short)814;
_Bool var_13 = (_Bool)1;
int var_14 = -427668031;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
