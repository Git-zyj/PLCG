#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)227;
unsigned int var_3 = 2887371692U;
unsigned char var_4 = (unsigned char)94;
long long int var_5 = 11147297892686125LL;
int var_7 = 828271222;
unsigned char var_8 = (unsigned char)242;
int var_9 = 1982021639;
int zero = 0;
int var_10 = -606299010;
unsigned short var_11 = (unsigned short)31809;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 6855788355322061462ULL;
int var_14 = 1254999343;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
