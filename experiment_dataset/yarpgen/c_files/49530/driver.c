#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)24;
unsigned short var_3 = (unsigned short)3263;
unsigned char var_4 = (unsigned char)183;
long long int var_5 = 3910065025543185345LL;
int zero = 0;
long long int var_11 = -7942740656902857826LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
