#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10716264258487632982ULL;
unsigned long long int var_6 = 8295088351990805201ULL;
unsigned long long int var_8 = 10615963529429872343ULL;
unsigned char var_10 = (unsigned char)206;
int zero = 0;
unsigned long long int var_19 = 12927410267885163954ULL;
unsigned short var_20 = (unsigned short)6894;
long long int var_21 = 4948077589461110923LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
