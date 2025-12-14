#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-21858;
unsigned char var_9 = (unsigned char)10;
_Bool var_10 = (_Bool)0;
long long int var_11 = -1776385786118898046LL;
int zero = 0;
unsigned char var_12 = (unsigned char)123;
unsigned char var_13 = (unsigned char)168;
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
