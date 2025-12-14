#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3727712837855652416LL;
unsigned int var_5 = 2229070411U;
unsigned char var_6 = (unsigned char)97;
int var_7 = 1758313408;
unsigned long long int var_10 = 13456865556781478827ULL;
int zero = 0;
signed char var_20 = (signed char)91;
int var_21 = 1564367195;
_Bool var_22 = (_Bool)1;
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
