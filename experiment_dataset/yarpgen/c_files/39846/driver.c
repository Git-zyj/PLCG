#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)8;
unsigned char var_7 = (unsigned char)88;
signed char var_9 = (signed char)90;
unsigned long long int var_16 = 10197520376211581116ULL;
long long int var_18 = -6823126223214880696LL;
int zero = 0;
unsigned short var_19 = (unsigned short)45690;
long long int var_20 = -7194017314167692854LL;
unsigned char var_21 = (unsigned char)198;
unsigned short var_22 = (unsigned short)20815;
unsigned char var_23 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
