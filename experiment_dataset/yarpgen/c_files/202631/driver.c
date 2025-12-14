#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
long long int var_3 = -4189952007744161048LL;
int var_5 = -2052253875;
unsigned long long int var_7 = 13768170355899491900ULL;
unsigned char var_8 = (unsigned char)198;
int zero = 0;
unsigned char var_13 = (unsigned char)153;
int var_14 = -482894535;
unsigned short var_15 = (unsigned short)29935;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
