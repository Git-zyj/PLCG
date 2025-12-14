#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5219349265704379489LL;
unsigned char var_4 = (unsigned char)253;
int var_5 = 2054106454;
int var_6 = -1044971916;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -494511469;
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
