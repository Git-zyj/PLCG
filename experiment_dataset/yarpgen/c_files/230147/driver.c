#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24386;
unsigned char var_3 = (unsigned char)173;
long long int var_4 = 6858568466665748404LL;
long long int var_9 = 7835680348576192859LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)58976;
void init() {
}

void checksum() {
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
