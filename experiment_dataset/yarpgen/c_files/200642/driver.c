#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5539024905230551001LL;
unsigned char var_2 = (unsigned char)107;
unsigned char var_5 = (unsigned char)65;
unsigned short var_7 = (unsigned short)19729;
unsigned short var_8 = (unsigned short)16372;
int var_9 = -1447059545;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 3628480273516253866ULL;
unsigned char var_12 = (unsigned char)244;
unsigned char var_13 = (unsigned char)63;
unsigned char var_14 = (unsigned char)148;
short var_15 = (short)21964;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
