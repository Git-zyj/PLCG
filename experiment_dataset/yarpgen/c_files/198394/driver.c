#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7024479870915162641LL;
unsigned char var_6 = (unsigned char)152;
signed char var_7 = (signed char)20;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-109;
unsigned int var_12 = 122726940U;
long long int var_13 = 1691630645393127772LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -9060011026083719540LL;
unsigned char var_18 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
