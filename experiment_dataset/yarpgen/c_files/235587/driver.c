#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)6;
_Bool var_6 = (_Bool)0;
int var_7 = -1856272816;
int var_8 = -1987776080;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 10111153824957283642ULL;
int zero = 0;
signed char var_11 = (signed char)5;
unsigned short var_12 = (unsigned short)28944;
long long int var_13 = 2756241553058865833LL;
unsigned long long int var_14 = 15392431514950628785ULL;
signed char var_15 = (signed char)-115;
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
