#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)33019;
unsigned char var_7 = (unsigned char)4;
unsigned char var_8 = (unsigned char)178;
int zero = 0;
int var_10 = 1468891848;
unsigned char var_11 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
