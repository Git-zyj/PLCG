#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-278;
unsigned short var_5 = (unsigned short)35917;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 787204992421238984LL;
unsigned short var_13 = (unsigned short)50024;
unsigned char var_14 = (unsigned char)35;
void init() {
}

void checksum() {
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
