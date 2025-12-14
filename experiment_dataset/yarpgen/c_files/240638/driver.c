#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13404;
signed char var_2 = (signed char)112;
_Bool var_6 = (_Bool)1;
int var_8 = 821248646;
int zero = 0;
short var_10 = (short)3304;
signed char var_11 = (signed char)-60;
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
