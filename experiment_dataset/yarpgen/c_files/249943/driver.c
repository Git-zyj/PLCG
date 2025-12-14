#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)4;
int var_7 = 1778402385;
unsigned short var_13 = (unsigned short)38872;
long long int var_15 = -6252993533647174954LL;
int var_19 = 1235716756;
int zero = 0;
long long int var_20 = -8242410666005007538LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 571904392161554298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
