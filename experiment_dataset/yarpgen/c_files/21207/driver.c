#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 102341915428137450ULL;
signed char var_6 = (signed char)30;
unsigned short var_7 = (unsigned short)28734;
unsigned char var_8 = (unsigned char)5;
int zero = 0;
unsigned short var_10 = (unsigned short)39080;
unsigned short var_11 = (unsigned short)10161;
unsigned short var_12 = (unsigned short)53137;
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
