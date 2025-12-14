#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -6569242117624519586LL;
unsigned char var_5 = (unsigned char)88;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 12473737363664149854ULL;
unsigned char var_9 = (unsigned char)40;
int zero = 0;
unsigned char var_10 = (unsigned char)123;
signed char var_11 = (signed char)-80;
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
