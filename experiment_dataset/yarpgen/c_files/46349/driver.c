#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_11 = (signed char)90;
unsigned char var_12 = (unsigned char)195;
signed char var_13 = (signed char)-48;
int var_17 = -1253365689;
unsigned short var_18 = (unsigned short)47743;
int zero = 0;
long long int var_20 = -1648128553089585288LL;
unsigned char var_21 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
