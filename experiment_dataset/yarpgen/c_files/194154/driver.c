#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)70;
long long int var_7 = 2979744533446177186LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 4263818310013034734LL;
unsigned int var_11 = 564394535U;
short var_12 = (short)-18244;
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
