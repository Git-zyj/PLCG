#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1993315680U;
unsigned char var_1 = (unsigned char)61;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)418;
long long int var_4 = 883763558305089459LL;
unsigned char var_6 = (unsigned char)93;
int zero = 0;
unsigned int var_12 = 2506364029U;
unsigned int var_13 = 308413631U;
void init() {
}

void checksum() {
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
