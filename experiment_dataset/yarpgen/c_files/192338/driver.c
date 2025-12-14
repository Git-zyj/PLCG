#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19552;
short var_5 = (short)17810;
unsigned char var_13 = (unsigned char)206;
signed char var_14 = (signed char)-14;
int zero = 0;
long long int var_16 = -8668005659475722660LL;
signed char var_17 = (signed char)49;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
