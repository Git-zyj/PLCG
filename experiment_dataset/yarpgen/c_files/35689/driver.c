#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
int var_1 = 772935481;
unsigned short var_5 = (unsigned short)64430;
int var_8 = 1379725864;
unsigned long long int var_9 = 10747839673901628495ULL;
unsigned short var_10 = (unsigned short)30312;
int zero = 0;
short var_12 = (short)-29344;
int var_13 = 1599947758;
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
