#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned int var_2 = 3000494692U;
unsigned short var_3 = (unsigned short)16252;
unsigned char var_4 = (unsigned char)123;
unsigned short var_6 = (unsigned short)2080;
long long int var_7 = -6679267270211949945LL;
unsigned int var_8 = 1852126895U;
int zero = 0;
long long int var_10 = -6655429885120574770LL;
long long int var_11 = -7547233997493932039LL;
unsigned int var_12 = 3236495372U;
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
