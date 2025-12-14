#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1930118320;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)21346;
unsigned short var_7 = (unsigned short)1987;
int zero = 0;
long long int var_11 = 1739605271541845002LL;
unsigned short var_12 = (unsigned short)8660;
long long int var_13 = 1820836115472782919LL;
unsigned char var_14 = (unsigned char)216;
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
